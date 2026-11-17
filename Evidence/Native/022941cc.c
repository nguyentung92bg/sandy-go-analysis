/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$SetCommon
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetCommon (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, System_Collections_Generic_List_BattleRoyalePerson__o* infos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$SetCommon
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetCommon
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this,
   System_Collections_Generic_List_BattleRoyalePerson__o* infos, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetCommon_21941cc(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  int iStack_64;
  
  if ((bRam0000000004f9b9b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04cae238);
    FUN_02132f7c(PTR_DAT_04cae240);
                    /* try { // try from 02294238 to 0239425b has its CatchHandler @ 02294238
                       catch() { ... } // from try @ 02294238 with catch @ 02294238
                       catch() { ... } // from try @ 02294264 with catch @ 02294238 */
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04cad708);
                    /* try { // try from 0229425c to 02394263 has its CatchHandler @ 02294278 */
                    /* try { // try from 02294264 to 0239428b has its CatchHandler @ 02294238 */
    FUN_02132f7c(PTR_DAT_04cadf88);
    FUN_02132f7c(PTR_DAT_04cad7c8);
                    /* catch() { ... } // from try @ 0229425c with catch @ 02294278 */
    FUN_02132f7c(PTR_DAT_04cae248);
    bRam0000000004f9b9b6 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x88);
  iStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if (lVar13 != 0) {
    iVar16 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar16) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar13 + 0x10),0,iVar16,0);
    }
    puVar8 = PTR_DAT_04cae248;
    puVar7 = PTR_DAT_04cae238;
    puVar6 = PTR_DAT_04cadf88;
    puVar5 = PTR_DAT_04cad7c8;
    puVar4 = PTR_DAT_04cad6d0;
    puVar3 = PTR_DAT_04cad698;
    puVar2 = PTR_DAT_04cad688;
    if (param_2 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = *(int *)(param_2 + 0x18);
    }
    lVar13 = *(long *)(param_1 + 0x80);
    iStack_64 = 0;
    if (lVar13 != 0) {
      while (iVar9 = iStack_64, iStack_64 < *(int *)(lVar13 + 0x18)) {
        lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar13,iStack_64,*(undefined8 *)puVar5);
        if ((lVar13 == 0) ||
           (lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0), lVar13 == 0))
        goto LAB_0229448c;
        UnityEngine_GameObject__SetActive_43c1408(lVar13,iVar9 < iVar16,0);
        if (iVar9 < iVar16) {
          if ((*(long *)(param_1 + 0x80) == 0) ||
             (uVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (*(long *)(param_1 + 0x80),iStack_64,*(undefined8 *)puVar5),
             param_2 == 0)) goto LAB_0229448c;
          uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                             (param_2,iStack_64,*(undefined8 *)puVar6);
          Dino_BusSand_App_UI_BattleRoyaleUi__SetHead_219c98c(uVar10,uVar11,0);
          lVar13 = *(long *)(param_1 + 0x88);
          uVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                             (param_2,iStack_64,*(undefined8 *)puVar6);
          if (lVar13 == 0) goto LAB_0229448c;
          lVar14 = *(long *)(lVar13 + 0x10);
          lVar15 = *(long *)puVar7;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0229448c;
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar13,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x80) == 0) goto LAB_0229448c;
          lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                             (*(long *)(param_1 + 0x80),iStack_64,*(undefined8 *)puVar5);
          uVar10 = System_Int32__ToString_482d750(&iStack_64,0);
          uVar10 = System_String__Concat_46c82e0(*(undefined8 *)puVar8,uVar10,0);
          if (lVar13 == 0) goto LAB_0229448c;
          UnityEngine_Object__set_name_43c72ec(lVar13,uVar10,0);
          if (iStack_64 < 8) {
            if ((*(long *)(param_1 + 0x80) == 0) ||
               (lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (*(long *)(param_1 + 0x80),iStack_64,*(undefined8 *)puVar5),
               lVar13 == 0)) goto LAB_0229448c;
            UnityEngine_Transform__SetAsLastSibling_43d4684(lVar13,0);
          }
        }
        lVar13 = *(long *)(param_1 + 0x80);
        iStack_64 = iStack_64 + 1;
        if (lVar13 == 0) goto LAB_0229448c;
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_80,*(long *)(param_1 + 0x90),*(undefined8 *)puVar4);
        while( true ) {
          uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_80,*(undefined8 *)puVar3);
          if ((uVar12 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_80,*(undefined8 *)puVar2);
            return;
          }
          if (lStack_70 == 0) break;
          lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lStack_70,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          UnityEngine_GameObject__SetActive_43c1408(lVar13,0,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_0229448c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

