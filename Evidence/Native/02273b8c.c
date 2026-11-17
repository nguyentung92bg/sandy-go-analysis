/* IL2CPP: Dino.BusSand.App.CrashContext$$OnUiOpened
void Dino_BusSand_App_CrashContext__OnUiOpened (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$OnUiOpened
   void Dino_BusSand_App_CrashContext__OnUiOpened (Dino_BusSand_App_UI_UIPanel_o* p, const
   MethodInfo* method); */

void Dino_BusSand_App_CrashContext__OnUiOpened_2173b8c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_38;
  
                    /* try { // try from 02273b8c to 02373baf has its CatchHandler @ 02273b8c
                       catch() { ... } // from try @ 02273b8c with catch @ 02273b8c
                       catch() { ... } // from try @ 02273bb8 with catch @ 02273b8c */
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b8bf & 1) == 0) {
                    /* try { // try from 02273bb0 to 02373bb7 has its CatchHandler @ 02273bdc */
    FUN_02132f7c(PTR_DAT_04cac450);
                    /* try { // try from 02273bb8 to 02373bf7 has its CatchHandler @ 02273b8c */
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cacdd8);
                    /* catch() { ... } // from try @ 02273bb0 with catch @ 02273bdc */
    FUN_02132f7c(PTR_DAT_04cac4d0);
    bRam0000000004f9b8bf = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar2 = PTR_DAT_04cac450;
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04cac450;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  if ((param_1 != 0) && (lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar7 = *(long *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar9 = *(long *)PTR_DAT_04cab718;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar6;
        thunk_FUN_02134474(puVar8);
      }
      else {
                    /* catch() { ... } // from try @ 02273cec with catch @ 02273ca4 */
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      System_String__Concat_46c82e0
                (*(undefined8 *)PTR_DAT_04cacdd8,*(undefined8 *)(param_1 + 0x20),0);
      Dino_BusSand_App_CrashContext__Log_216fbd8();
      lVar5 = Dino_BusSand_App_CrashContext__UiTrail_2173cf0();
      puVar2 = PTR_DAT_04cacbb0;
      uVar6 = *(undefined8 *)PTR_DAT_04cac4d0;
                    /* try { // try from 02273ce0 to 02373ceb has its CatchHandler @ 02273d0c */
      if ((bRam0000000004f9b8b4 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa458);
        FUN_02132f7c(PTR_DAT_04cac450);
        FUN_02132f7c(PTR_DAT_04cab608);
        FUN_02132f7c(PTR_DAT_04caaf80);
        FUN_02132f7c(PTR_DAT_04cacbb8);
        FUN_02132f7c(PTR_DAT_04cacbb0);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        bRam0000000004f9b8b4 = 1;
      }
      uStack_38 = 0;
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar7,0);
      puVar3 = PTR_DAT_04cac450;
      puVar2 = PTR_DAT_04ca9c30;
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar7 + 0x18);
        *puVar8 = uVar6;
        thunk_FUN_02134474(puVar8,uVar6);
        plVar10 = (long *)(lVar7 + 0x20);
        *plVar10 = lVar5;
        thunk_FUN_02134474(plVar10,lVar5);
        lVar5 = *(long *)puVar2;
        if (*plVar10 != 0) {
          lVar5 = *plVar10;
        }
        *plVar10 = lVar5;
        thunk_FUN_02134474(plVar10);
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                            (lVar5,*puVar8,&uStack_38,*(undefined8 *)PTR_DAT_04cab608);
          if (((uVar4 & 1) == 0) ||
             (uVar4 = System_String__op_Equality_46d1108(uStack_38,*plVar10,0), (uVar4 & 1) == 0)) {
            lVar5 = *(long *)puVar3;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar5 = *(long *)puVar3;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 == 0) goto LAB_0226fbd4;
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar5,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20),
                       *(undefined8 *)PTR_DAT_04caaf80);
            plVar10 = (long *)(lVar7 + 0x10);
            *plVar10 = **(long **)(*(long *)puVar3 + 0xb8);
            thunk_FUN_02134474(plVar10);
            if (*plVar10 != 0) {
              uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              System_Action___ctor_47b5ed0(uVar6,lVar7,*(undefined8 *)PTR_DAT_04cacbb8,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_CrashContext__Send_2173340(uVar6);
            }
          }
          return;
        }
      }
LAB_0226fbd4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02273cec to 02373d37 has its CatchHandler @ 02273ca4 */
  FUN_02133224();
}

