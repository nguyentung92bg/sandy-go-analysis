/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$Themes
System_Collections_Generic_List_GiftPackTheme__o* Dino_BusSand_App_Meta_GiftPackFeature__Themes (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$Themes
   System_Collections_Generic_List_GiftPackTheme__o* Dino_BusSand_App_Meta_GiftPackFeature__Themes
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c,
   const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__Themes_2235350(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lStack_48;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_04cb33d0;
  puVar3 = PTR_DAT_04cb33c8;
  if ((bRam0000000004f9bea0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb33d8);
    FUN_02132f7c(PTR_DAT_04cb33e0);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb33e8);
    FUN_02132f7c(PTR_DAT_04cb33f0);
    FUN_02132f7c(PTR_DAT_04cb33d0);
    FUN_02132f7c(PTR_DAT_04cb33c8);
    FUN_02132f7c(PTR_DAT_04cb33f8);
    FUN_02132f7c(PTR_DAT_04cb3328);
    bRam0000000004f9bea0 = 1;
  }
  uStack_34 = 0;
  lStack_48 = 0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar4);
  if (param_2 != 0) {
    lVar12 = *(long *)(param_2 + 0x88);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__MappedThemeIds_223561c(uVar1);
    if (lVar6 != 0) {
      lVar12 = lVar6;
    }
    uVar7 = System_String__IsNullOrWhiteSpace_46d20a0(lVar12,0);
    if ((uVar7 & 1) == 0) {
      if ((lVar12 != 0) &&
         (lVar12 = System_String__Split_46d50c0(lVar12,0x2c,0,0), puVar4 = PTR_DAT_04cb33e8,
         puVar3 = PTR_DAT_04cb33e0, lVar12 != 0)) {
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar2) {
          uVar13 = 0;
          do {
            if (uVar2 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar6 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_02335614;
            uVar8 = System_String__Trim_46d6ee0(lVar6,0);
            uVar7 = System_Int32__TryParse_482de64(uVar8,&uStack_34,0);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_02335614;
              uVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                                (*(long *)(param_1 + 0x20),uStack_34,&lStack_48,
                                 *(undefined8 *)puVar3);
              if ((((uVar7 & 1) != 0) && (lStack_48 != 0)) && (*(int *)(lStack_48 + 0x18) != 0)) {
                if (lVar5 == 0) goto LAB_02335614;
                lVar6 = *(long *)(lVar5 + 0x10);
                lVar11 = *(long *)puVar4;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar6 == 0) goto LAB_02335614;
                uVar2 = *(uint *)(lVar5 + 0x18);
                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                  *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lStack_48;
                  thunk_FUN_02134474();
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar5,lStack_48,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            uVar2 = *(uint *)(lVar12 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uVar2);
        }
        puVar3 = PTR_DAT_04cb3328;
        lVar12 = *(long *)PTR_DAT_04cb3328;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar3;
        }
        puVar10 = *(undefined8 **)(lVar12 + 0xb8);
        lVar6 = puVar10[2];
        if (lVar6 == 0) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar10 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar8 = *puVar10;
          lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb33d8);
          System_Comparison_object____ctor_3326afc(lVar6,uVar8,*(undefined8 *)PTR_DAT_04cb33f8,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          *plVar9 = lVar6;
          thunk_FUN_02134474(plVar9,lVar6);
        }
        if (lVar5 != 0) {
          System_Collections_Generic_List_object___Sort_3a83690
                    (lVar5,lVar6,*(undefined8 *)PTR_DAT_04cb33f0);
          return lVar5;
        }
      }
LAB_02335614:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return lVar5;
}

