header Synch

  uses Thread

  -- /* Addition: Enum for mutex
  enum HELD = 0, FREE
  -- /*

  class Semaphore
    superclass Object
    fields
      count: int
      waitingThreads: List [Thread]
    methods
      Init (initialCount: int)
      Down ()
      Up ()
  endClass

  class Mutex
    superclass Object

    -- /* Addition: Add fields to the Mutex class
    fields
      heldBy: ptr to Thread -- The thread that holds the lock
      flag: int	            
      waitingThreads: List [Thread]
   -- */

    methods
      Init ()
      Lock ()
      Unlock ()
      IsHeldByCurrentThread () returns bool
  endClass

  class Condition
    superclass Object
    fields
      waitingThreads: List [Thread]
    methods
      Init ()
      Wait (mutex: ptr to Mutex)
      Signal (mutex: ptr to Mutex)
      Broadcast (mutex: ptr to Mutex)
  endClass

endHeader
