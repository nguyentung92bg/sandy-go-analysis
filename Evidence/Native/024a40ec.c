/* IL2CPP: Dino.BusSand.View.GameView$$OverUi
bool Dino_BusSand_View_GameView__OverUi (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$OverUi
   bool Dino_BusSand_View_GameView__OverUi (const MethodInfo* method); */

ulong Dino_BusSand_View_GameView__OverUi_23a40ec(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_b4 [68];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar3 = PTR_DAT_04cabca8;
                    /* try { // try from 024a40ec to 025a40f3 has its CatchHandler @ 024a4474 */
  if ((bRam0000000004f9c950 & 1) == 0) {
                    /* try { // try from 024a4114 to 025a411b has its CatchHandler @ 024a4468 */
    FUN_02132f7c(PTR_DAT_04cabca8);
                    /* try { // try from 024a411c to 025a41df has its CatchHandler @ 024a3eb8 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c950 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_30 = (ulong)uStack_30._4_4_ << 0x20;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    uVar6 = 0;
LAB_024a4200:
    return (ulong)(uVar6 & 1);
  }
  iVar4 = UnityEngine_Input__get_touchCount_443092c(0);
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  if (iVar4 < 1) {
    if (iVar1 == 0) {
                    /* try { // try from 024a4218 to 025a4223 has its CatchHandler @ 024a43f8 */
      thunk_FUN_0218fdac();
    }
    lVar9 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
    puVar3 = PTR_DAT_04ca9ae8;
    if (lVar9 != 0) {
      if ((bRam0000000004fac7e3 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fac7e3 = 1;
      }
      uVar7 = *(undefined8 *)(lVar9 + 0x28);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        plVar10 = *(long **)(lVar9 + 0x28);
        if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x047a2690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (**(code **)(*plVar10 + 0x278))
                            (plVar10,0xffffffff,*(undefined8 *)(*plVar10 + 0x280));
          return uVar8;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      return 0;
    }
  }
  else {
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
    UnityEngine_Input__GetTouch_44300d4(auStack_b4,0,0);
    func_0x049b5410(&uStack_70,auStack_b4,0x44);
                    /* try { // try from 024a41e0 to 025a41e7 has its CatchHandler @ 024a440c */
    uVar5 = UnityEngine_Touch__get_fingerId_442f554(&uStack_70,0);
    if (lVar9 != 0) {
                    /* try { // try from 024a41fc to 025a4203 has its CatchHandler @ 024a4400 */
      uVar6 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject_46a2608(lVar9,uVar5,0);
      goto LAB_024a4200;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

