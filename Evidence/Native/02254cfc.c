/* IL2CPP: Dino.BusSand.App.LanguageFonts.<>c$$<Apply>b__11_0
bool Dino_BusSand_App_LanguageFonts___c___Apply_b__11_0 (Dino_BusSand_App_LanguageFonts___c_o* __this, TMPro_TMP_FontAsset_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts.<>c$$<Apply>b__11_0
   bool Dino_BusSand_App_LanguageFonts___c___Apply_b__11_0 (Dino_BusSand_App_LanguageFonts___c_o*
   __this, TMPro_TMP_FontAsset_o* f, const MethodInfo* method); */

undefined8
Dino_BusSand_App_LanguageFonts___c___Apply_b__11_0_2154cfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  int iVar17;
  
  puVar4 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b7d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab5b0);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b7d6 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  puVar4 = PTR_DAT_04cab530;
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  lVar7 = *(long *)PTR_DAT_04cab530;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar11 = *(long *)PTR_DAT_04cab5b0;
                    /* catch() { ... } // from try @ 02254dfc with catch @ 02254db8 */
  if (*(long *)(lVar7 + 0x10) != 0) {
    iVar5 = System_Collections_Generic_HashSet_object___InternalGetHashCode_37e89d4
                      (lVar7,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0xb0));
    lVar12 = *(long *)(lVar7 + 0x10);
    if (lVar12 == 0) {
LAB_038e5c14:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = *(uint *)(lVar12 + 0x18);
    iVar17 = 0;
    if (uVar2 != 0) {
      iVar17 = iVar5 / (int)uVar2;
    }
    uVar3 = iVar5 - iVar17 * uVar2;
    if (uVar2 <= uVar3) {
LAB_038e5bd4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar2 = *(int *)(lVar12 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar2) {
      lVar12 = *(long *)(lVar7 + 0x18);
      if (lVar12 == 0) goto LAB_038e5c14;
      uVar13 = *(undefined8 *)(lVar12 + 0x18);
      iVar17 = 0;
      do {
        if ((uint)uVar13 <= uVar2) goto LAB_038e5bd4;
        lVar1 = lVar12 + 0x20 + (ulong)uVar2 * 0x10;
        if (*(int *)(lVar12 + 0x20 + (ulong)uVar2 * 0x10) == iVar5) {
          plVar16 = *(long **)(lVar7 + 0x30);
          if (plVar16 == (long *)0x0) goto LAB_038e5c14;
          uVar13 = *(undefined8 *)(lVar1 + 8);
          lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x20);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_0216b470(lVar10);
          }
          lVar14 = *plVar16;
          uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar6 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_038e5b74;
              }
              uVar6 = uVar6 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_0216b7a4(plVar16,lVar10,0);
LAB_038e5b74:
          uVar6 = (*(code *)*puVar8)(plVar16,uVar13,param_2,puVar8[1]);
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar13 = *(undefined8 *)(lVar12 + 0x18);
        }
        if ((int)(uint)uVar13 <= iVar17) {
          thunk_FUN_021985a8(PTR_DAT_04caa348);
          uVar13 = thunk_FUN_0216e89c();
          uVar9 = thunk_FUN_021985a8(PTR_DAT_04cc7428);
          System_InvalidOperationException___ctor_482ff30(uVar13,uVar9,0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar13,lVar11);
        }
        if ((uint)uVar13 <= uVar2) goto LAB_038e5bd4;
        uVar2 = *(uint *)(lVar1 + 4);
        iVar17 = iVar17 + 1;
      } while (-1 < (int)uVar2);
    }
  }
  return 0;
}

