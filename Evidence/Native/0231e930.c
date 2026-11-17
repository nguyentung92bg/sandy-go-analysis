/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature.ContinueSequence$$Next
void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence__Next (Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature.ContinueSequence$$Next
   void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence__Next
   (Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence__Next_221e930(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lStack_68;
  
  if ((bRam0000000004f9bdba & 1) == 0) {
                    /* try { // try from 0231e960 to 0241ea47 has its CatchHandler @ 0231e960
                       catch(type#1 @ 00000000) { ... } // from try @ 0231e960 with catch @ 0231e960
                        */
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cadaa0);
    FUN_02132f7c(PTR_DAT_04cb2928);
    FUN_02132f7c(PTR_DAT_04cb2930);
    FUN_02132f7c(PTR_DAT_04cb2938);
    FUN_02132f7c(PTR_DAT_04cadac0);
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04cada98);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9bdba = 1;
  }
  puVar6 = PTR_DAT_04cb2938;
  puVar5 = PTR_DAT_04cb2928;
  puVar4 = PTR_DAT_04cadac0;
  puVar3 = PTR_DAT_04cadaa0;
  puVar2 = PTR_DAT_04cada98;
  lStack_68 = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  do {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 0231ea48 to 0241ea4f has its CatchHandler @ 0231ea5c */
    iVar1 = *(int *)(param_1 + 0x28);
                    /* try { // try from 0231ea50 to 0241ea57 has its CatchHandler @ 0231ea60 */
    if (*(int *)(lVar8 + 0x18) <= iVar1) {
      lVar8 = *(long *)(param_1 + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ed64 with catch @ 0231ede0
                        */
      *(undefined1 *)(param_1 + 0x2c) = 1;
                    /* try { // try from 0231ede4 to 0241ee23 has its CatchHandler @ 0231ede4
                       catch(type#1 @ 00000000) { ... } // from try @ 0231ede4 with catch @ 0231ede4
                       catch(type#1 @ 00000000) { ... } // from try @ 0231ee34 with catch @ 0231ede4
                        */
      if (lVar8 == 0) {
        return;
      }
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      return;
    }
    uVar14 = *(undefined8 *)puVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ea48 with catch @ 0231ea5c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ea50 with catch @ 0231ea60
                        */
    *(int *)(param_1 + 0x28) = iVar1 + 1;
                    /* try { // try from 0231ea64 to 0241ea97 has its CatchHandler @ 0231ea64
                       catch(type#1 @ 00000000) { ... } // from try @ 0231ea64 with catch @ 0231ea64
                        */
    plVar9 = (long *)System_Collections_Generic_List_object___get_Item_3a81924(lVar8,iVar1,uVar14);
    lVar8 = *(long *)puVar3;
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar8);
      lVar8 = *(long *)puVar3;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = *plVar9;
    lVar13 = *(long *)puVar4;
                    /* try { // try from 0231ea98 to 0241ea9f has its CatchHandler @ 0231eab8 */
    uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
                    /* try { // try from 0231eaa0 to 0241eaa7 has its CatchHandler @ 0231eabc */
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0231eae0;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ea98 with catch @ 0231eab8
                        */
        uVar15 = uVar15 - 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231eaa0 with catch @ 0231eabc
                        */
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,lVar13,0);
LAB_0231eae0:
    uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar15,uVar15 & 0xffffffff);
    }
    bVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (lVar8,uVar15 & 0xffffffff,&lStack_68,*(undefined8 *)puVar6);
    lVar8 = lStack_68;
    iVar1 = iVar1 + -1;
                    /* try { // try from 0231eb18 to 0241eb8b has its CatchHandler @ 0231eb18
                       catch(type#1 @ 00000000) { ... } // from try @ 0231eb18 with catch @ 0231eb18
                        */
    if ((bVar7 & lStack_68 != 0) != 0) {
      uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
      System_Action_int____ctor_35ef18c(uVar14,param_1,*(undefined8 *)PTR_DAT_04cb2930,0);
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar11,param_1,*(undefined8 *)puVar5,0);
      uVar15 = (**(code **)(lVar8 + 0x18))
                         (*(undefined8 *)(lVar8 + 0x40),uVar14,uVar11,*(undefined8 *)(lVar8 + 0x28))
      ;
      if ((uVar15 & 1) != 0) {
                    /* try { // try from 0231eb8c to 0241eb8f has its CatchHandler @ 0231ebf8 */
        if (*(long *)(param_1 + 0x10) != 0) {
          Dino_BusSand_App_UI_ContinueBottomPanel__OnContinueOpened_22beef8
                    (iVar1,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18),0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    lVar13 = *plVar9;
    lVar8 = *(long *)puVar4;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_0231ebf4;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,lVar8,2);
LAB_0231ebf4:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231eb8c with catch @ 0231ebf8
                        */
    uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    uVar15 = System_String__IsNullOrEmpty_46d2084(uVar14,0);
    if ((uVar15 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ec3c with catch @ 0231ec28
                        */
      uVar15 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(uVar14,0);
      if ((uVar15 & 1) != 0) {
                    /* try { // try from 0231ec38 to 0241ec3b has its CatchHandler @ 0231ecb0 */
                    /* try { // try from 0231ec3c to 0241ecb3 has its CatchHandler @ 0231ec28 */
        uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
        System_Action_int____ctor_35ef18c(uVar11,param_1,*(undefined8 *)PTR_DAT_04cb2930,0);
        uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar12,param_1,*(undefined8 *)puVar5,0);
        uVar14 = Dino_BusSand_App_UI_ActivityContinuePanel__Open_2185988
                           (uVar14,plVar9,uVar11,uVar12,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ec38 with catch @ 0231ecb0
                        */
                    /* try { // try from 0231ecb4 to 0241ed63 has its CatchHandler @ 0231ecb4
                       catch(type#1 @ 00000000) { ... } // from try @ 0231ecb4 with catch @ 0231ecb4
                       catch(type#1 @ 00000000) { ... } // from try @ 0231ed68 with catch @ 0231ecb4
                        */
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
        if ((uVar15 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            Dino_BusSand_App_UI_ContinueBottomPanel__OnContinueOpened_22beef8
                      (iVar1,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18),0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0x10);
  } while( true );
}

