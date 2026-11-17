/* IL2CPP: Dino.BusSand.App.UiAssets$$PreloadClips
System_Func_bool__o* Dino_BusSand_App_UiAssets__PreloadClips (System_Collections_Generic_IList_string__o* names, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a477b4) */
/* IL2CPP: Dino.BusSand.App.UiAssets$$PreloadClips
   System_Func_bool__o* Dino_BusSand_App_UiAssets__PreloadClips
   (System_Collections_Generic_IList_string__o* names, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UiAssets__PreloadClips_2163350(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long **pplStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar2 = PTR_DAT_04cab490;
  if ((bRam0000000004f9b83c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac360);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9b83c = 1;
  }
  puVar3 = PTR_DAT_04cac360;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UiAssets__BeginInit_216312c();
  lVar11 = *(long *)puVar3;
  lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  plVar12 = *(long **)(lVar11 + 0x38);
  if (plVar12 == (long *)0x0) {
    FUN_02132f7c(PTR_DAT_04cac348);
    FUN_02132f7c(PTR_DAT_04cc52e0);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbe520);
    FUN_02132f7c(PTR_DAT_04cbe528);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cab490);
    plVar12 = *(long **)(lVar11 + 0x38);
    if (plVar12 == (long *)0x0) {
      FUN_0216b4cc(lVar11);
      plVar12 = *(long **)(lVar11 + 0x38);
    }
  }
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  if ((*(ushort *)(*plVar12 + 0x135) & 1) == 0) {
    FUN_0216b470();
  }
  lVar8 = thunk_FUN_0216e89c();
  Dino_BusSand_App_UiAssets___c__DisplayClass18_0_object____ctor_2a28134
            (lVar8,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
  if ((lVar8 == 0) || (*(undefined4 *)(lVar8 + 0x10) = 0, param_1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar13 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cbe520) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_02a4745c;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_0216b7a4(param_1,*(long *)PTR_DAT_04cbe520,0);
LAB_02a4745c:
  plVar12 = (long *)(*(code *)*puVar9)(param_1,puVar9[1]);
  puVar6 = PTR_DAT_04cc52e0;
  puVar5 = PTR_DAT_04cbe528;
  puVar4 = PTR_DAT_04cab608;
  puVar3 = PTR_DAT_04cab490;
  puVar2 = PTR_DAT_04ca9c08;
  pplStack_88 = &plStack_68;
  uStack_90 = 0;
  do {
    plStack_68 = plVar12;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02a474f0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar2,0);
LAB_02a474f0:
    uVar14 = (*(code *)*puVar9)(plVar12,puVar9[1]);
    plVar12 = plStack_68;
    if ((uVar14 & 1) == 0) {
      if (plStack_68 == (long *)0x0) goto LAB_02a47748;
      lVar7 = *plStack_68;
      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar14 == 0) goto LAB_02a47720;
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *plStack_68;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02a47554;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)puVar5,0);
LAB_02a47554:
    lVar13 = (*(code *)*puVar9)(plVar12,puVar9[1]);
    if ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_0216b470();
    }
    lVar10 = thunk_FUN_0216e89c();
    Dino_BusSand_App_UiAssets___c__DisplayClass18_1_object____ctor_2a2814c
              (lVar10,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x18));
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar16 = (long *)(lVar10 + 0x18);
    *plVar16 = lVar8;
    thunk_FUN_02134474(plVar16,lVar8);
    plVar12 = plStack_68;
    if (lVar13 != 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar14 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                         (lVar7,lVar13,lVar10 + 0x10,*(undefined8 *)puVar4);
      plVar12 = plStack_68;
      if ((uVar14 & 1) != 0) {
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar3;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                           (lVar13,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)puVar6);
        plVar12 = plStack_68;
        if ((uVar14 & 1) == 0) {
          lVar13 = *(long *)puVar3;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar13 = *(long *)puVar3;
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x70);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar14 = System_Collections_Generic_HashSet_object___Add_37e654c
                             (lVar13,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)PTR_DAT_04cab7e0)
          ;
          plVar12 = plStack_68;
          if ((uVar14 & 1) != 0) {
            lVar13 = *plVar16;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar17 = *(undefined8 *)(lVar10 + 0x10);
            iVar1 = *(int *)(*(long *)PTR_DAT_04cac348 + 0xe4);
            *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + 1;
            if (iVar1 == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_AddressableAssets_Addressables__LoadAssetAsync_object__263fa74
                      (&uStack_a8,uVar17,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20));
            uStack_78 = uStack_a0;
            uStack_80 = uStack_a8;
            uStack_70 = uStack_98;
            if ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x38) + 0x135) & 1) == 0) {
              FUN_0216b470();
            }
            uVar17 = thunk_FUN_0216e89c();
            System_Action_AsyncOperationHandle_object_____ctor_34f77ac
                      (uVar17,lVar10,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x30),
                       *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x40));
            UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___add_Completed_304a86c
                      (&uStack_80,uVar17,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x48));
            plVar12 = plStack_68;
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02a4773c;
    }
  }
LAB_02a47720:
  puVar9 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)PTR_DAT_04ca9b30,0);
LAB_02a4773c:
  (*(code *)*puVar9)(plVar12,puVar9[1]);
LAB_02a47748:
  uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
  System_Func_bool____ctor_379d5fc(uVar17,lVar8,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x58),0);
  return uVar17;
}

