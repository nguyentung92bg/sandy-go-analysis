/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$ShowGuide
void Dino_BusSand_App_UI_StreakEventPanel__ShowGuide (Dino_BusSand_App_UI_StreakEventPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$ShowGuide
   void Dino_BusSand_App_UI_StreakEventPanel__ShowGuide (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_StreakEventPanel__ShowGuide_21c28ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cafd20;
  if ((bRam0000000004f9baea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caf220);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cafd28);
    FUN_02132f7c(PTR_DAT_04cafd30);
    FUN_02132f7c(PTR_DAT_04cafd20);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9baea = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar4 + 0x10),param_1);
    plVar7 = (long *)(param_1 + 0x68);
    lVar8 = *plVar7;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04caf220;
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cafd28,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_UI_BusStreakUi__Guide_21b379c(param_1,uVar6);
      *(undefined8 *)(param_1 + 0x68) = uVar6;
      thunk_FUN_02134474(plVar7,uVar6);
    }
    if ((*plVar7 != 0) &&
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*plVar7,0), lVar8 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
      if (*plVar7 != 0) {
        UnityEngine_Transform__SetAsLastSibling_43d4684(*plVar7,0);
        lVar8 = *plVar7;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_BusStreakUi__PlayGuide_21b47a0(lVar8);
        puVar1 = PTR_DAT_04cad4c0;
        if (*plVar7 != 0) {
          uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*plVar7,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          lVar8 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar6,0);
          plVar7 = (long *)(lVar4 + 0x18);
          *plVar7 = lVar8;
          thunk_FUN_02134474(plVar7,lVar8);
          puVar3 = PTR_DAT_04cafd30;
          puVar2 = PTR_DAT_04cac208;
          puVar1 = PTR_DAT_04cac1e8;
          if (*plVar7 != 0) {
                    /* catch() { ... } // from try @ 022c2aec with catch @ 022c2ab4 */
            UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*plVar7,0);
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Action_float____ctor_35f1448(uVar6,lVar4,*(undefined8 *)puVar3,0);
                    /* try { // try from 022c2ae4 to 023c2aeb has its CatchHandler @ 022c2b08 */
                    /* try { // try from 022c2aec to 023c2b1b has its CatchHandler @ 022c2ab4 */
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar4 = Dino_BusSand_App_Tween__Value_2160f64(0x3e800000,uVar6,0);
                    /* catch() { ... } // from try @ 022c2ae4 with catch @ 022c2b08 */
            if ((lVar4 != 0) &&
               (lVar4 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar4,1,0), lVar4 != 0)) {
              *(long *)(lVar4 + 0x18) = param_1;
              thunk_FUN_02134474((long *)(lVar4 + 0x18),param_1,0);
              return lVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

