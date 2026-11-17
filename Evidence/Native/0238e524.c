/* IL2CPP: Dino.BusSand.App.UI.KitPop$$SlideExtras
void Dino_BusSand_App_UI_KitPop__SlideExtras (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0238e940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPop$$SlideExtras
   void Dino_BusSand_App_UI_KitPop__SlideExtras (Dino_BusSand_App_UI_KitPop_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPop__SlideExtras_228e524(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  
  if ((bRam0000000004f9c1a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb52a0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad740);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1a6 = 1;
  }
  lVar11 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  puVar4 = PTR_DAT_04ca9ae8;
  if (lVar11 != 0) {
    lVar11 = UnityEngine_Transform__get_parent_43d0d70(lVar11,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
    if ((uVar12 & 1) != 0) {
      return;
    }
    if (lVar11 != 0) {
      plVar13 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar11,0);
      puVar10 = PTR_DAT_04cb52a0;
      puVar9 = PTR_DAT_04cad740;
      puVar8 = PTR_DAT_04cad4c0;
      puVar7 = PTR_DAT_04cabdb0;
      puVar6 = PTR_DAT_04ca9c08;
      uVar3 = _UNK_00e2098c;
      uVar2 = _UNK_00e2043c;
joined_r0x0238e628:
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar17 = *plVar13;
        lVar11 = *(long *)puVar6;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              puVar14 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0238e6b8;
            }
            uVar12 = uVar12 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,lVar11,0);
LAB_0238e6b8:
        uVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        puVar5 = PTR_DAT_04ca9b30;
        if ((uVar12 & 1) == 0) {
          plVar13 = (long *)thunk_FUN_0216e7a0(plVar13,*(undefined8 *)PTR_DAT_04ca9b30);
          if (plVar13 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar13;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0238e8d0;
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0238e8b8;
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar17 = *plVar13;
        lVar11 = *(long *)puVar6;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              puVar14 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_0238e720;
            }
            uVar12 = uVar12 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,lVar11,1);
LAB_0238e720:
        plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar15);
          }
        }
        uVar16 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Object__op_Inequality_43c8dec(plVar15,uVar16,0);
      } while ((uVar12 & 1) == 0);
      uVar16 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
      if ((uVar12 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar16 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x20),0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Object__op_Inequality_43c8dec(plVar15,uVar16,0);
        if ((uVar12 & 1) == 0) goto joined_r0x0238e628;
      }
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar16 = UnityEngine_Component__GetComponent_object__26f97e8(plVar15,*(undefined8 *)puVar10);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (*plVar15 != *(long *)puVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar15);
        }
        Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0x43340000,uVar2,uVar3,plVar15,1);
      }
      goto joined_r0x0238e628;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar18 = piVar18 + 4;
    if (uVar12 == 0) break;
LAB_0238e8b8:
    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0238e8ec;
    }
  }
LAB_0238e8d0:
  puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)puVar5,0);
LAB_0238e8ec:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  return;
}

