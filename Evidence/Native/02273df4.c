/* IL2CPP: Dino.BusSand.App.CrashContext$$OnUiClosed
void Dino_BusSand_App_CrashContext__OnUiClosed (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$OnUiClosed
   void Dino_BusSand_App_CrashContext__OnUiClosed (Dino_BusSand_App_UI_UIPanel_o* p, const
   MethodInfo* method); */

void Dino_BusSand_App_CrashContext__OnUiClosed_2173df4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b8c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cacdf0);
    FUN_02132f7c(PTR_DAT_04caba58);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02273e4c to 02373e57 has its CatchHandler @ 02273f00 */
    FUN_02132f7c(PTR_DAT_04cacdf8);
    FUN_02132f7c(PTR_DAT_04cac4d0);
    bRam0000000004f9b8c0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar1 = PTR_DAT_04cac450;
  if ((uVar5 & 1) != 0) {
    return;
  }
                    /* try { // try from 02273e94 to 02373e9f has its CatchHandler @ 02273eec */
  lVar6 = *(long *)PTR_DAT_04cac450;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
                    /* try { // try from 02273eb4 to 02373ebf has its CatchHandler @ 02273ee4 */
  if ((param_1 == 0) || (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18), lVar6 == 0)) {
LAB_02273f6c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 02273ec0 to 02373f0f has its CatchHandler @ 02273dbc */
  iVar3 = System_Collections_Generic_List_object___LastIndexOf_3a83008
                    (lVar6,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cacdf0);
  if (-1 < iVar3) {
    lVar6 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 02273eb4 with catch @ 02273ee4 */
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 02273e94 with catch @ 02273eec */
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar6 == 0) goto LAB_02273f6c;
                    /* catch() { ... } // from try @ 02273e4c with catch @ 02273f00 */
    System_Collections_Generic_List_object___RemoveAt_3a833a0
              (lVar6,iVar3,*(undefined8 *)PTR_DAT_04caba58);
  }
  uVar7 = System_String__Concat_46c82e0
                    (*(undefined8 *)PTR_DAT_04cacdf8,*(undefined8 *)(param_1 + 0x20),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_CrashContext__Log_216fbd8(uVar7);
  lVar6 = Dino_BusSand_App_CrashContext__UiTrail_2173cf0();
  puVar1 = PTR_DAT_04cacbb0;
  uVar7 = *(undefined8 *)PTR_DAT_04cac4d0;
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
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04cac450;
  puVar1 = PTR_DAT_04ca9c30;
  if (lVar4 != 0) {
    puVar9 = (undefined8 *)(lVar4 + 0x18);
    *puVar9 = uVar7;
    thunk_FUN_02134474(puVar9,uVar7);
    plVar8 = (long *)(lVar4 + 0x20);
    *plVar8 = lVar6;
    thunk_FUN_02134474(plVar8,lVar6);
    lVar6 = *(long *)puVar1;
    if (*plVar8 != 0) {
      lVar6 = *plVar8;
    }
    *plVar8 = lVar6;
    thunk_FUN_02134474(plVar8);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 != 0) {
      uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar6,*puVar9,&uStack_38,*(undefined8 *)PTR_DAT_04cab608);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = System_String__op_Equality_46d1108(uStack_38,*plVar8,0), (uVar5 & 1) == 0)) {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_0226fbd4;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar6,*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),
                   *(undefined8 *)PTR_DAT_04caaf80);
        plVar8 = (long *)(lVar4 + 0x10);
        *plVar8 = **(long **)(*(long *)puVar2 + 0xb8);
        thunk_FUN_02134474(plVar8);
        if (*plVar8 != 0) {
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar7,lVar4,*(undefined8 *)PTR_DAT_04cacbb8,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_CrashContext__Send_2173340(uVar7);
        }
      }
      return;
    }
  }
LAB_0226fbd4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

