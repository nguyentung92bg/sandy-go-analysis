/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$SetItem
void Dino_BusSand_App_UI_StreakRatePanel__SetItem (Dino_BusSand_App_UI_StreakRatePanel_o* __this, UnityEngine_RectTransform_o* item, int32_t state, int32_t score, int32_t rewardId, int32_t index, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$SetItem
   void Dino_BusSand_App_UI_StreakRatePanel__SetItem (Dino_BusSand_App_UI_StreakRatePanel_o* __this,
   UnityEngine_RectTransform_o* item, int32_t state, int32_t score, int32_t rewardId, int32_t index,
   int32_t count, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRatePanel__SetItem_21e4990
               (undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,int param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_54;
  
  puVar1 = PTR_DAT_04cb0d90;
  if ((bRam0000000004f9bbc3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae8a8);
                    /* try { // try from 022e49f8 to 023e4a4b has its CatchHandler @ 022e5aa0 */
    FUN_02132f7c(PTR_DAT_04cae8b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb0d98);
    FUN_02132f7c(PTR_DAT_04cb0da0);
    FUN_02132f7c(PTR_DAT_04cb0d90);
    FUN_02132f7c(PTR_DAT_04cb0da8);
    FUN_02132f7c(PTR_DAT_04cb0db0);
    FUN_02132f7c(PTR_DAT_04cb0738);
    FUN_02132f7c(PTR_DAT_04cb0740);
    FUN_02132f7c(PTR_DAT_04cad0b0);
    FUN_02132f7c(PTR_DAT_04cadc80);
                    /* try { // try from 022e4a88 to 023e4aa7 has its CatchHandler @ 022e5aa4 */
    FUN_02132f7c(PTR_DAT_04caf0f8);
    FUN_02132f7c(PTR_DAT_04cacfb8);
    FUN_02132f7c(PTR_DAT_04cb0db8);
    FUN_02132f7c(PTR_DAT_04caf100);
    FUN_02132f7c(PTR_DAT_04cb0dc0);
    FUN_02132f7c(PTR_DAT_04cb0dc8);
    FUN_02132f7c(PTR_DAT_04cb0dd0);
    FUN_02132f7c(PTR_DAT_04cb0dd8);
    FUN_02132f7c(PTR_DAT_04cb0de0);
    FUN_02132f7c(PTR_DAT_04caf130);
    bRam0000000004f9bbc3 = 1;
  }
  iStack_54 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar3 + 0x10),param_1);
    plVar10 = (long *)(lVar3 + 0x18);
    *plVar10 = param_2;
    thunk_FUN_02134474(plVar10,param_2);
    *(undefined4 *)(lVar3 + 0x20) = param_3;
    puVar1 = PTR_DAT_04ca9ae8;
    if (*plVar10 != 0) {
      lVar4 = UnityEngine_Transform__Find_43d4bec(*plVar10,*(undefined8 *)PTR_DAT_04cadc80,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (lVar4 != 0) {
        lVar6 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0738,0);
        lVar7 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0dc8,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if ((lVar6 == 0) ||
             (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar6 == 0))
          goto LAB_022e50d8;
          UnityEngine_GameObject__SetActive_43c1408(lVar6,*(int *)(lVar3 + 0x20) == 0,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        if ((uVar5 & 1) != 0) {
          if ((lVar7 == 0) ||
             (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar6 == 0))
          goto LAB_022e50d8;
                    /* try { // try from 022e4c68 to 023e4c6b has its CatchHandler @ 022e5aa0 */
          UnityEngine_GameObject__SetActive_43c1408(lVar6,*(int *)(lVar3 + 0x20) != 0,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        lVar6 = 0;
        if ((uVar5 & 1) != 0) {
          if (lVar7 == 0) goto LAB_022e50d8;
          lVar6 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cb0da8,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if ((lVar6 == 0) ||
             (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar6 == 0))
          goto LAB_022e50d8;
          UnityEngine_GameObject__SetActive_43c1408(lVar6,*(int *)(lVar3 + 0x20) == 1,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        lVar6 = 0;
        if ((uVar5 & 1) != 0) {
          if (lVar7 == 0) goto LAB_022e50d8;
          lVar6 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cb0740,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022e4d60 to 023e4d7b has its CatchHandler @ 022e5a94 */
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if ((lVar6 == 0) ||
             (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar6 == 0))
          goto LAB_022e50d8;
          UnityEngine_GameObject__SetActive_43c1408(lVar6,*(int *)(lVar3 + 0x20) == 2,0);
        }
                    /* try { // try from 022e4da4 to 023e4db3 has its CatchHandler @ 022e5a78 */
        uVar8 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0db0,0);
        iStack_54 = param_6 + 1;
                    /* try { // try from 022e4dc0 to 023e4dc7 has its CatchHandler @ 022e5aa8 */
        uVar9 = System_Int32__ToString_482d750(&iStack_54,0);
        puVar2 = PTR_DAT_04cae9a8;
        if (*(int *)(*(long *)PTR_DAT_04cae9a8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cae9a8);
        }
                    /* try { // try from 022e4dec to 023e4e97 has its CatchHandler @ 022e5aac */
        Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar9);
        uVar8 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0dc0,0);
        iStack_54 = param_6 + 1;
        uVar9 = System_Int32__ToString_482d750(&iStack_54,0);
        Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar9);
        lVar6 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(param_5,0);
        uVar8 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0db8,0);
        if (lVar6 != 0) {
          if (0 < *(int *)(lVar6 + 0x18)) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
            if ((uVar5 & 1) != 0) {
              System_Collections_Generic_List_ActivityRewardEntry___get_Item_39e19e0
                        (&uStack_78,lVar6,0,*(undefined8 *)PTR_DAT_04cae8b0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
                    /* try { // try from 022e4eb4 to 023e4ebb has its CatchHandler @ 022e5aa8 */
              uStack_88 = uStack_70;
              uStack_90 = uStack_78;
              uStack_80 = uStack_68;
              Dino_BusSand_App_UI_StreakRateHallBar__ApplyRewardRibbon_21e0e4c
                        (uVar8,&uStack_90,*(undefined8 *)PTR_DAT_04cad0b0,
                         *(undefined8 *)PTR_DAT_04cacfb8,*(undefined8 *)PTR_DAT_04caf130,
                         *(undefined8 *)PTR_DAT_04caf0f8,*(undefined8 *)PTR_DAT_04caf100);
            }
          }
                    /* try { // try from 022e4f20 to 023e4f2b has its CatchHandler @ 022e5a88 */
          lVar6 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0dd0,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar5 & 1) != 0) {
            if ((lVar6 == 0) ||
               (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar6 == 0))
            goto LAB_022e50d8;
            UnityEngine_GameObject__SetActive_43c1408(lVar6,param_7 + -1 != param_6,0);
          }
                    /* try { // try from 022e4f80 to 023e5093 has its CatchHandler @ 022e5a94 */
          lVar6 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0dd8,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar6 == 0) goto LAB_022e50d8;
            uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar9,lVar3,*(undefined8 *)PTR_DAT_04cb0d98,0);
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar9,0,0,0);
          }
          lVar4 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb0de0,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar4 == 0) goto LAB_022e50d8;
            uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar9,lVar3,*(undefined8 *)PTR_DAT_04cb0da0,0);
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar9,0,0,0);
          }
          return;
        }
      }
    }
  }
LAB_022e50d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

