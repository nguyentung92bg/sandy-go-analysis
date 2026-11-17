/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Hide
void Dino_BusSand_Cheat_CheatUiHider__Hide (Dino_BusSand_Cheat_CheatUiHider_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Hide
   void Dino_BusSand_Cheat_CheatUiHider__Hide (Dino_BusSand_Cheat_CheatUiHider_o* __this,
   UnityEngine_Transform_o* t, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatUiHider__Hide_236f16c(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  
  if ((bRam0000000004f9c7bd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04cbaf68);
    FUN_02132f7c(PTR_DAT_04cbaf70);
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cbaf78);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7bd = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_2 == 0) goto LAB_0246f304;
  lVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                    (param_2,*(undefined8 *)PTR_DAT_04cadf40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0246f304;
    uVar4 = System_Collections_Generic_Dictionary_object__bool___ContainsKey_3490c1c
                      (*(long *)(param_1 + 0x18),lVar3,*(undefined8 *)PTR_DAT_04cbaf68);
    if ((uVar4 & 1) == 0) {
      lVar12 = *(long *)(param_1 + 0x18);
      if (lVar12 == 0) goto LAB_0246f304;
      uVar7 = 0;
      uVar9 = *(undefined8 *)PTR_DAT_04cbaf70;
      goto LAB_0246f2a8;
    }
  }
  else {
    lVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0);
    if (lVar3 == 0) goto LAB_0246f304;
    lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar3,*(undefined8 *)PTR_DAT_04cb0890);
    lVar12 = *(long *)(param_1 + 0x18);
    if (lVar12 == 0) goto LAB_0246f304;
    uVar7 = 1;
    uVar9 = *(undefined8 *)PTR_DAT_04cbaf70;
LAB_0246f2a8:
    System_Collections_Generic_Dictionary_object__bool___set_Item_3490a04(lVar12,lVar3,uVar7,uVar9);
  }
  if (lVar3 == 0) {
LAB_0246f304:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_CanvasGroup__set_alpha_467ad3c(0,lVar3,0);
  UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar3,0,0);
  UnityEngine_CanvasGroup__set_interactable_467aec4(lVar3,0,0);
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 == 0) goto LAB_0246f304;
  lVar8 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cbaf78 + 0x20) + 0xc0) + 0xa8);
  if (*(long *)(lVar12 + 0x10) == 0) {
    System_Collections_Generic_HashSet_object___Initialize_37e7198
              (lVar12,0,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
  }
  iVar2 = System_Collections_Generic_HashSet_object___InternalGetHashCode_37e89d4
                    (lVar12,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0xb0))
  ;
  lVar13 = *(long *)(lVar12 + 0x10);
  if (lVar13 == 0) goto LAB_038e7764;
  uVar16 = *(uint *)(lVar13 + 0x18);
  iVar20 = 0;
  if (uVar16 != 0) {
    iVar20 = iVar2 / (int)uVar16;
  }
  uVar18 = iVar2 - iVar20 * uVar16;
  if (uVar18 < uVar16) {
    lVar19 = *(long *)(lVar12 + 0x18);
    uVar16 = *(int *)(lVar13 + (ulong)uVar18 * 4 + 0x20) - 1;
    if (-1 < (int)uVar16) {
      if (lVar19 == 0) goto LAB_038e7764;
      uVar7 = *(undefined8 *)(lVar19 + 0x18);
      iVar20 = 0;
      do {
        if ((uint)uVar7 <= uVar16) goto LAB_038e7724;
        lVar13 = lVar19 + 0x20 + (ulong)uVar16 * 0x10;
        if (*(int *)(lVar19 + 0x20 + (ulong)uVar16 * 0x10) == iVar2) {
          plVar17 = *(long **)(lVar12 + 0x30);
          if (plVar17 == (long *)0x0) goto LAB_038e7764;
          uVar7 = *(undefined8 *)(lVar13 + 8);
          lVar6 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0216b470(lVar6);
          }
          lVar14 = *plVar17;
          uVar4 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar4 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_038e75b4;
              }
              uVar4 = uVar4 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_0216b7a4(plVar17,lVar6,0);
LAB_038e75b4:
          uVar4 = (*(code *)*puVar5)(plVar17,uVar7,lVar3,puVar5[1]);
          if ((uVar4 & 1) != 0) {
            return 0;
          }
          uVar7 = *(undefined8 *)(lVar19 + 0x18);
        }
        if ((int)(uint)uVar7 <= iVar20) {
          thunk_FUN_021985a8(PTR_DAT_04caa348);
          uVar7 = thunk_FUN_0216e89c();
          uVar9 = thunk_FUN_021985a8(PTR_DAT_04cc7428);
          System_InvalidOperationException___ctor_482ff30(uVar7,uVar9,0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar7,lVar8);
        }
        if ((uint)uVar7 <= uVar16) goto LAB_038e7724;
        uVar16 = *(uint *)(lVar13 + 4);
        iVar20 = iVar20 + 1;
      } while (-1 < (int)uVar16);
    }
    uVar16 = *(uint *)(lVar12 + 0x28);
    uVar4 = (ulong)uVar16;
    if ((int)uVar16 < 0) {
      if (lVar19 == 0) goto LAB_038e7764;
      uVar16 = *(uint *)(lVar12 + 0x24);
      uVar4 = (ulong)uVar16;
      uVar11 = *(uint *)(lVar19 + 0x18);
      if (uVar16 == uVar11) {
        System_Collections_Generic_HashSet_object___IncreaseCapacity_37e7274
                  (lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x188));
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_038e7764;
        uVar4 = (ulong)*(uint *)(lVar12 + 0x24);
        lVar19 = *(long *)(lVar12 + 0x18);
        uVar7 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18);
        *(uint *)(lVar12 + 0x24) = *(uint *)(lVar12 + 0x24) + 1;
        if (lVar19 == 0) goto LAB_038e7764;
        iVar20 = 0;
        iVar10 = (int)uVar7;
        if (iVar10 != 0) {
          iVar20 = iVar2 / iVar10;
        }
        uVar18 = iVar2 - iVar20 * iVar10;
        uVar11 = *(uint *)(lVar19 + 0x18);
      }
      else {
        *(uint *)(lVar12 + 0x24) = uVar16 + 1;
      }
    }
    else {
      if (lVar19 == 0) goto LAB_038e7764;
      uVar11 = *(uint *)(lVar19 + 0x18);
      if (uVar11 <= uVar16) goto LAB_038e7724;
      *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(lVar19 + uVar4 * 0x10 + 0x24);
    }
    uVar16 = (uint)uVar4;
    if (uVar16 < uVar11) {
      lVar8 = lVar19 + 0x20;
      *(int *)(lVar8 + (-(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4)) = iVar2;
      plVar17 = (long *)(lVar8 + (long)(int)uVar16 * 0x10 + 8);
      *plVar17 = lVar3;
      thunk_FUN_02134474(plVar17,lVar3);
      lVar3 = *(long *)(lVar12 + 0x10);
      if (lVar3 == 0) {
LAB_038e7764:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((uVar18 < *(uint *)(lVar3 + 0x18)) && (uVar16 < *(uint *)(lVar19 + 0x18))) {
        lVar3 = lVar3 + (ulong)uVar18 * 4;
        *(int *)(lVar8 + (long)(int)uVar16 * 0x10 + 4) = *(int *)(lVar3 + 0x20) + -1;
        *(uint *)(lVar3 + 0x20) = uVar16 + 1;
        *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + 1;
        *(int *)(lVar12 + 0x38) = *(int *)(lVar12 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_038e7724:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

