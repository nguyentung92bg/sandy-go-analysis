/* IL2CPP: Dino.BusSand.App.UI.KitPop$$StaggerContent
void Dino_BusSand_App_UI_KitPop__StaggerContent (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0238e06c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPop$$StaggerContent
   void Dino_BusSand_App_UI_KitPop__StaggerContent (Dino_BusSand_App_UI_KitPop_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPop__StaggerContent_228dcc0(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  
  puVar7 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1a5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad740);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1a5 = 1;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar9 = PTR_DAT_04cad4c0;
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
  if ((uVar11 & 1) != 0) {
    uVar19 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (_UNK_00e20af8,_UNK_00e208e8,_UNK_00e207cc,_UNK_00e1feac,uVar19,0,0);
  }
  uVar19 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
  if ((uVar11 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar12 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(*(long *)(param_1 + 0x40),0);
  puVar10 = PTR_DAT_04cad740;
  puVar7 = PTR_DAT_04ca9c08;
  fVar6 = _UNK_00e20af8;
  fVar5 = _UNK_00e20658;
  uVar4 = _UNK_00e205ec;
  uVar3 = _UNK_00e204e8;
  uVar2 = _UNK_00e1fea8;
  iVar18 = 0;
  do {
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = *plVar12;
    lVar15 = *(long *)puVar7;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar15) {
          puVar13 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0238de98;
        }
        uVar11 = uVar11 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,lVar15,0);
LAB_0238de98:
    uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar8 = PTR_DAT_04ca9b30;
    if ((uVar11 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_0216e7a0(plVar12,*(undefined8 *)PTR_DAT_04ca9b30);
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar15 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar11 == 0) goto LAB_0238e000;
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = *plVar12;
    lVar15 = *(long *)puVar7;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar15) {
          puVar13 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_0238df00;
        }
        uVar11 = uVar11 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,lVar15,1);
LAB_0238df00:
    plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = *(byte *)(*(long *)puVar10 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar10)) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar14);
    }
    lVar15 = UnityEngine_Component__get_gameObject_43bcde8(plVar14,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar11 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
    if ((uVar11 & 1) != 0) {
      iVar20 = iVar18;
      if (4 < iVar18) {
        iVar20 = 5;
      }
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                ((float)iVar20 * fVar6 + fVar5,uVar2,uVar3,uVar4,plVar14,0,0);
      iVar18 = iVar18 + 1;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar17 = piVar17 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0238e01c;
    }
  }
LAB_0238e000:
  puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar8,0);
LAB_0238e01c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return;
}

