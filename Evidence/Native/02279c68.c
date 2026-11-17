/* IL2CPP: Dino.BusSand.App.SimulatedIap.<Delay>d__3$$MoveNext
bool Dino_BusSand_App_SimulatedIap__Delay_d__3__MoveNext (Dino_BusSand_App_SimulatedIap__Delay_d__3_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SimulatedIap.<Delay>d__3$$MoveNext
   bool Dino_BusSand_App_SimulatedIap__Delay_d__3__MoveNext
   (Dino_BusSand_App_SimulatedIap__Delay_d__3_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_SimulatedIap__Delay_d__3__MoveNext_2179c68(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
                    /* try { // try from 02279c7c to 02379c87 has its CatchHandler @ 02279cd4 */
  if ((bRam0000000004f9b8f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b8f8 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
                    /* try { // try from 02279c9c to 02379ca7 has its CatchHandler @ 02279ccc */
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 02279c9c with catch @ 02279ccc */
                    /* catch() { ... } // from try @ 02279c7c with catch @ 02279cd4 */
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 02279c34 with catch @ 02279ce8 */
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar5,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
                    /* try { // try from 02279ca8 to 02379cf7 has its CatchHandler @ 02279ba4 */
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  return iVar1 == 0;
}

