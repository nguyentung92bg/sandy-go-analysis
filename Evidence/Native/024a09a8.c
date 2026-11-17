/* IL2CPP: Dino.BusSand.View.GameView$$HandleInput
void Dino_BusSand_View_GameView__HandleInput (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$HandleInput
   void Dino_BusSand_View_GameView__HandleInput (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__HandleInput_23a09a8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_b4 [68];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000004f9c918 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabca8);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c918 = 1;
  }
  uStack_30 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if ((((*(char *)(param_1 + 0x41) != '\0') && (*(char *)(param_1 + 0x40) == '\0')) &&
      (*(long *)(param_1 + 0x20) != 0)) &&
     (((*(char *)(*(long *)(param_1 + 0x20) + 0x80) == '\0' &&
       (*(float *)(param_1 + 0x110) <= *(float *)(param_1 + 0x10c))) &&
      (uVar4 = UnityEngine_Input__GetMouseButtonDown_443005c(0,0), puVar1 = PTR_DAT_04cabca8,
      (uVar4 & 1) != 0)))) {
    if (*(int *)(*(long *)PTR_DAT_04cabca8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      iVar2 = UnityEngine_Input__get_touchCount_443092c(0);
      if (iVar2 < 1) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 024a0b28 to 025a0b2f has its CatchHandler @ 024a13d4 */
        lVar6 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
        if (lVar6 == 0) goto LAB_024a0b94;
        uVar4 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject_46a2600(lVar6,0);
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
        UnityEngine_Input__GetTouch_44300d4(auStack_b4,0,0);
        func_0x049b5410(&uStack_70,auStack_b4,0x44);
        uVar3 = UnityEngine_Touch__get_fingerId_442f554(&uStack_70,0);
        if (lVar6 == 0) {
LAB_024a0b94:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar4 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject_46a2608(lVar6,uVar3,0)
        ;
      }
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
    UnityEngine_Input__get_mousePosition_4430454(0);
                    /* try { // try from 024a0b48 to 025a0b4f has its CatchHandler @ 024a13cc */
    iVar2 = Dino_BusSand_View_GameView__Tap_23a0b98(param_1);
    puVar1 = PTR_DAT_04cb2870;
    if (iVar2 < 0) {
      lVar6 = *(long *)PTR_DAT_04cb2870;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
                    /* try { // try from 024a0b68 to 025a0b6f has its CatchHandler @ 024a0bc4 */
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (lVar6 != 0) {
        UnityEngine_Input__get_mousePosition_4430454(0);
                    /* try { // try from 024a0b80 to 025a0b87 has its CatchHandler @ 024a0bc0 */
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
    }
  }
  return;
}

