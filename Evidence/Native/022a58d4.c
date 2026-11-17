/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$RefreshTicks
void Dino_BusSand_App_UI_ClimbTowerPanel__RefreshTicks (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, float height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022a5cf4) */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$RefreshTicks
   void Dino_BusSand_App_UI_ClimbTowerPanel__RefreshTicks (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, float height, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__RefreshTicks_21a58d4
               (float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  float fVar17;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba34 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad740);
    FUN_02132f7c(PTR_DAT_04caeac0);
    FUN_02132f7c(PTR_DAT_04caeac8);
    bRam0000000004f9ba34 = 1;
  }
  uVar16 = *(undefined8 *)(param_3 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (*(long *)(param_3 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar10 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(*(long *)(param_3 + 0x78),0);
  puVar7 = PTR_DAT_04caeac8;
  puVar6 = PTR_DAT_04caeac0;
  puVar5 = PTR_DAT_04cad740;
  puVar4 = PTR_DAT_04cabdb0;
  puVar3 = PTR_DAT_04ca9c08;
  if (plVar10 != (long *)0x0) {
    param_1 = param_1 + 0.5;
    do {
      lVar14 = *plVar10;
      lVar13 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            fVar17 = param_2;
            goto LAB_022a5a40;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar13,0);
      fVar17 = param_2;
LAB_022a5a40:
      uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      puVar2 = PTR_DAT_04ca9b30;
      if ((uVar9 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_0216e7a0(plVar10,*(undefined8 *)PTR_DAT_04ca9b30);
        if (plVar10 == (long *)0x0) {
          return;
        }
        lVar13 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 == 0) goto LAB_022a5c74;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_022a5c5c;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar14 = *plVar10;
      lVar13 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_022a5aa8;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar13,1);
LAB_022a5aa8:
      plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *plVar12;
      bVar8 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(lVar13 + 0x130) < bVar8) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar8 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar12);
      }
      if (lVar13 != *(long *)puVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar12);
      }
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar12,0);
      param_2 = fVar17;
      lVar13 = UnityEngine_Transform__Find_43d4bec(plVar12,*(undefined8 *)puVar6,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar9 & 1) != 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        bVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar14,0);
        if (((fVar17 <= param_1 ^ bVar8) & 1) != 0) {
          lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          UnityEngine_GameObject__SetActive_43c1408(lVar13,fVar17 <= param_1,0);
        }
      }
      lVar13 = UnityEngine_Transform__Find_43d4bec(plVar12,*(undefined8 *)puVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar9 & 1) != 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        bVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar14,0);
        if (((fVar17 <= param_1 ^ bVar8) & 1) == 0) {
          lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          UnityEngine_GameObject__SetActive_43c1408(lVar13,param_1 < fVar17,0);
        }
      }
    } while (plVar10 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_022a5c5c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_022a5c90;
    }
  }
LAB_022a5c74:
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar2,0);
LAB_022a5c90:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}

