/* IL2CPP: Dino.BusSand.Core.Lift$$get_Queue
System_Collections_Generic_IEnumerable_ValueTuple_int__BusKind__int___o* Dino_BusSand_Core_Lift__get_Queue (Dino_BusSand_Core_Lift_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift$$get_Queue
   System_Collections_Generic_IEnumerable_ValueTuple_int__BusKind__int___o*
   Dino_BusSand_Core_Lift__get_Queue (Dino_BusSand_Core_Lift_o* __this, const MethodInfo* method);
    */

long Dino_BusSand_Core_Lift__get_Queue_242e51c(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cbef40;
  if ((bRam0000000004f9cbfa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbef40);
    bRam0000000004f9cbfa = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
  uVar2 = System_Environment__get_CurrentManagedThreadId_4872920(0);
                    /* try { // try from 0252e578 to 0262eebb has its CatchHandler @ 0252e578
                       catch() { ... } // from try @ 0252e578 with catch @ 0252e578
                       catch() { ... } // from try @ 0252ef28 with catch @ 0252e578
                       catch() { ... } // from try @ 0252f730 with catch @ 0252e578
                       catch() { ... } // from try @ 0252f768 with catch @ 0252e578
                       catch() { ... } // from try @ 0252f794 with catch @ 0252e578 */
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  *(undefined8 *)(lVar3 + 0x28) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),param_1);
  return lVar3;
}

