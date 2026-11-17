/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$.ctor
void Dino_BusSand_App_QaPilot_Runner___ctor (Dino_BusSand_App_QaPilot_Runner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$.ctor
   void Dino_BusSand_App_QaPilot_Runner___ctor (Dino_BusSand_App_QaPilot_Runner_o* __this, const
   MethodInfo* method); */

long Dino_BusSand_App_QaPilot_Runner___ctor_215cd00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_DAT_04cabdb8;
  puVar3 = PTR_DAT_04caba88;
  puVar2 = PTR_DAT_04cab748;
  puVar1 = PTR_DAT_04cab740;
                    /* try { // try from 0225cd08 to 0235cd33 has its CatchHandler @ 0225cd08
                       catch() { ... } // from try @ 0225cd08 with catch @ 0225cd08
                       catch() { ... } // from try @ 0225cd44 with catch @ 0225cd08 */
                    /* try { // try from 0225cd34 to 0235cd43 has its CatchHandler @ 0225cd64 */
  if ((bRam0000000004f9b7ff & 1) == 0) {
                    /* try { // try from 0225cd44 to 0235cd77 has its CatchHandler @ 0225cd08 */
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cabdb8);
                    /* catch() { ... } // from try @ 0225cd34 with catch @ 0225cd64 */
    FUN_02132f7c(PTR_DAT_04caba88);
    bRam0000000004f9b7ff = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 0225cd80 to 0235cdef has its CatchHandler @ 0225cd80
                       catch() { ... } // from try @ 0225cd80 with catch @ 0225cd80
                       catch() { ... } // from try @ 0225ce50 with catch @ 0225cd80 */
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar5);
  uVar5 = FUN_02133068(*(undefined8 *)puVar4,4);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_02134474();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)puVar3;
  thunk_FUN_02134474();
  *(undefined8 *)(param_1 + 0x38) = _UNK_00e6a6f8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  return param_1;
}

