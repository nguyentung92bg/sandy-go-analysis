/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$Refresh
void Dino_BusSand_App_UI_BattleRoyaleStartPanel__Refresh (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$Refresh
   void Dino_BusSand_App_UI_BattleRoyaleStartPanel__Refresh
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_BattleRoyaleStartPanel__Refresh_2199d38(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000004f9b9e1 & 1) == 0) {
                    /* catch() { ... } // from try @ 02299d00 with catch @ 02299d54 */
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02299d74 to 02399d77 has its CatchHandler @ 02299d80 */
    FUN_02132f7c(PTR_DAT_04cae3e0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02299d74 with catch @ 02299d80
                        */
    FUN_02132f7c(PTR_DAT_04cae3f8);
                    /* try { // try from 02299d84 to 02399db3 has its CatchHandler @ 02299d84
                       catch() { ... } // from try @ 02299d84 with catch @ 02299d84
                       catch() { ... } // from try @ 02299dc0 with catch @ 02299d84 */
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cae400);
    FUN_02132f7c(PTR_DAT_04cae408);
    FUN_02132f7c(PTR_DAT_04cae410);
                    /* try { // try from 02299db4 to 02399dbf has its CatchHandler @ 02299de0 */
    FUN_02132f7c(PTR_DAT_04cae418);
                    /* try { // try from 02299dc0 to 02399dfb has its CatchHandler @ 02299d84 */
    FUN_02132f7c(PTR_DAT_04cae420);
    bRam0000000004f9b9e1 = 1;
  }
  lVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
                    /* catch() { ... } // from try @ 02299db4 with catch @ 02299de0 */
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_State_2221138(*(long *)(param_1 + 0x40),0);
    puVar3 = PTR_DAT_04cae3e0;
    lVar10 = *(long *)(param_1 + 0x38);
    if (iVar5 == 0) {
      if (lVar10 == 0) goto LAB_0229a05c;
      bVar4 = true;
    }
    else {
                    /* try { // try from 02299dfc to 02399e6f has its CatchHandler @ 02299dfc
                       catch() { ... } // from try @ 02299dfc with catch @ 02299dfc
                       catch() { ... } // from try @ 02299e84 with catch @ 02299dfc */
      if (lVar10 == 0) goto LAB_0229a05c;
      bVar4 = *(char *)(lVar10 + 0x10) != '\0';
    }
    if (*(char *)(lVar10 + 0x11) == '\0') {
      bVar11 = false;
    }
    else {
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar10 == 0)) goto LAB_0229a05c;
      bVar11 = *(long *)(lVar10 + 0x18) < lVar6;
    }
    Dino_BusSand_App_UI_UIPanel__Show_21f4018
              (param_1,*(undefined8 *)PTR_DAT_04cae408,(bVar4 | bVar11) ^ 1,0);
                    /* try { // try from 02299e70 to 02399e83 has its CatchHandler @ 02299e98 */
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,bVar4 | bVar11,0);
    puVar3 = PTR_DAT_04cae3f8;
                    /* try { // try from 02299e84 to 02399eaf has its CatchHandler @ 02299dfc */
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 02299e70 with catch @ 02299e98 */
      bVar1 = 0;
      if (*(char *)(*(long *)(param_1 + 0x38) + 0x11) != '\0') {
        bVar1 = bVar11 ^ 1;
      }
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cae418,bVar1,0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,bVar1 ^ 1,0);
      Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetMood_219a1f8(param_1,bVar1);
      plVar12 = (long *)(param_1 + 0x58);
      if (*plVar12 != 0) {
        UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar12,0);
        *(undefined8 *)(param_1 + 0x58) = 0;
        thunk_FUN_02134474(plVar12,0);
      }
      if (bVar1 == 0) {
        Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetGate_219a3f8(param_1,0);
      }
      else {
        Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetGate_219a3f8(param_1,1);
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar10 == 0)) goto LAB_0229a05c;
        lVar10 = *(long *)(lVar10 + 0x18);
        uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cade40,0)
        ;
        uVar8 = Dino_BusSand_App_Meta_LiveClock__FormatRemain_2240758((lVar10 - lVar6) / 1000,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar7,uVar8);
        uVar9 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
        if ((uVar9 & 1) != 0) {
          uVar7 = Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown_219a504(param_1,lVar10);
          uVar7 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar7,0);
          *(undefined8 *)(param_1 + 0x58) = uVar7;
          thunk_FUN_02134474(plVar12,uVar7);
        }
      }
      puVar3 = PTR_DAT_04ca9ae8;
      lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cae400,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      lVar10 = 0;
      if ((uVar9 & 1) != 0) {
        if (lVar6 == 0) goto LAB_0229a05c;
        lVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                           (lVar6,*(undefined8 *)PTR_DAT_04cada30);
      }
      puVar3 = PTR_DAT_04cac7b8;
      puVar2 = (undefined8 *)PTR_DAT_04cae410;
      if (bVar1 == 0) {
        puVar2 = (undefined8 *)PTR_DAT_04cae420;
      }
      uVar7 = *puVar2;
      if ((bRam0000000004f9ba01 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac7b8);
        bRam0000000004f9ba01 = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9c2af & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,uVar7,0);
        bRam0000000004f9c2af = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
      if (((uVar9 & 1) == 0) &&
         (uVar9 = System_String__IsNullOrEmpty_46d2084(uVar7,0), (uVar9 & 1) == 0)) {
        if (lVar10 != 0) {
          lVar6 = UnityEngine_Animation__get_Item_4334ee8(lVar10,uVar7,0);
          uVar9 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar6,0,0);
          if ((uVar9 & 1) != 0) goto LAB_023a899c;
          UnityEngine_Behaviour__set_enabled_43bc50c(lVar10,1,0);
          UnityEngine_Animation__Stop_4334660(lVar10,0);
          if (lVar6 != 0) {
            UnityEngine_AnimationState__set_time_43370c0(0,lVar6,0);
            UnityEngine_Animation__Play_4335164(lVar10,uVar7,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224(0,0);
            }
            lVar10 = *(long *)(lVar6 + 0x10);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
            }
            if (pcRam0000000004fa4d58 == (code *)0x0) {
              pcRam0000000004fa4d58 = (code *)FUN_02132f40(&UNK_00e3f77f);
            }
                    /* WARNING: Could not recover jumptable at 0x04437260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar13 = (*pcRam0000000004fa4d58)(lVar10);
            return auVar13;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
LAB_023a899c:
      return ZEXT816(0);
    }
  }
LAB_0229a05c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

