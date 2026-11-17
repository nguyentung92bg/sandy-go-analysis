/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel.<>c__DisplayClass30_0$$<OnOpen>b__3
void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__3 (Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel.<>c__DisplayClass30_0$$<OnOpen>b__3
   void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__3
   (Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__3_232cb44(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* try { // try from 0242cb4c to 0252cb57 has its CatchHandler @ 0242cc54 */
                    /* try { // try from 0242cb58 to 0252cc73 has its CatchHandler @ 0242ca74 */
  if ((bRam0000000004f9c60d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c60d = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e201f4,_UNK_00e2098c,uVar4,0,0,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e20840,_UNK_00e20170,uVar4,0);
        if (*(long *)(param_1 + 0x10) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0242cb4c with catch @ 0242cc54
                        */
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0242cb3c with catch @ 0242cc58
                        */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
                    /* try { // try from 0242cc74 to 0252cc77 has its CatchHandler @ 0242cc90 */
          if ((uVar2 & 1) == 0) {
                    /* try { // try from 0242cc78 to 0252cc93 has its CatchHandler @ 0242ca74 */
                    /* catch() { ... } // from try @ 0242cc74 with catch @ 0242cc90 */
            if (((*(long *)(param_1 + 0x10) == 0) ||
                (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x68), lVar3 == 0)) ||
               (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar3 == 0))
            goto LAB_0242ccbc;
                    /* try { // try from 0242cc94 to 0252cc9b has its CatchHandler @ 0242cca4 */
            uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
                    /* try { // try from 0242cc9c to 0252cca7 has its CatchHandler @ 0242ca74 */
            if ((uVar2 & 1) != 0) {
              return;
            }
          }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0242cc94 with catch @ 0242cca4
                        */
          if (*(long *)(param_1 + 0x10) != 0) {
            *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x42) = 1;
            return;
          }
        }
      }
    }
  }
LAB_0242ccbc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

