/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$EnterOpenDelayState
void Dino_BusSand_App_UI_GuidePanel__EnterOpenDelayState (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023c89bc) */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$EnterOpenDelayState
   void Dino_BusSand_App_UI_GuidePanel__EnterOpenDelayState (Dino_BusSand_App_UI_GuidePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__EnterOpenDelayState_22c84fc(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  
  puVar4 = PTR_DAT_04cb69e0;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c366 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad740);
    FUN_02132f7c(PTR_DAT_04cb69e8);
    FUN_02132f7c(PTR_DAT_04cb69e0);
    FUN_02132f7c(PTR_DAT_04cb69f0);
    FUN_02132f7c(PTR_DAT_04cb6950);
    FUN_02132f7c(PTR_DAT_04cae4e0);
    FUN_02132f7c(PTR_DAT_04cadc30);
    bRam0000000004f9c366 = 1;
  }
  uVar13 = *(undefined8 *)puVar4;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar13,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
                    /* try { // try from 023c85f4 to 024c885b has its CatchHandler @ 023c85f4
                       catch() { ... } // from try @ 023c85f4 with catch @ 023c85f4
                       catch() { ... } // from try @ 023c8864 with catch @ 023c85f4
                       catch() { ... } // from try @ 023c8bf4 with catch @ 023c85f4
                       catch() { ... } // from try @ 023c8c1c with catch @ 023c85f4
                       catch() { ... } // from try @ 023c8c48 with catch @ 023c85f4 */
  if ((uVar9 & 1) != 0) {
    if (lVar8 != 0) {
      plVar10 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar8,0);
      puVar6 = PTR_DAT_04cb6950;
      puVar5 = PTR_DAT_04cad740;
      puVar4 = PTR_DAT_04ca9c08;
      do {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = *plVar10;
        lVar8 = *(long *)puVar4;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_023c8688;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar8,0);
LAB_023c8688:
        uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar3 = PTR_DAT_04ca9b30;
        if ((uVar9 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_0216e7a0(plVar10,*(undefined8 *)PTR_DAT_04ca9b30);
          if (plVar10 == (long *)0x0) goto LAB_023c8804;
          lVar8 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_023c87d8;
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_023c87c0;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = *plVar10;
        lVar8 = *(long *)puVar4;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_023c86f0;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar8,1);
LAB_023c86f0:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar12);
        }
        lVar8 = UnityEngine_Object__get_name_43c71a4(plVar12,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar7 = System_String__IndexOf_46d7290(lVar8,*(undefined8 *)puVar6,4,0);
        if (-1 < iVar7) {
          lVar8 = UnityEngine_Component__get_gameObject_43bcde8(plVar12,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
        }
      } while( true );
    }
    goto LAB_023c89b8;
  }
  goto LAB_023c8804;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_023c87c0:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_023c87f4;
    }
  }
LAB_023c87d8:
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar3,0);
LAB_023c87f4:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_023c8804:
  puVar6 = PTR_DAT_04cb69f0;
  puVar5 = PTR_DAT_04cae4e0;
  puVar4 = PTR_DAT_04cadc30;
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cb69e8,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar6,0,0);
                    /* try { // try from 023c885c to 024c8863 has its CatchHandler @ 023c8bfc */
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar5,0,0);
                    /* try { // try from 023c8864 to 024c8bef has its CatchHandler @ 023c85f4 */
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar4,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0),
       lVar8 == 0)) goto LAB_023c89b8;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
  }
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x70),0),
       lVar8 == 0)) goto LAB_023c89b8;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
  }
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
       lVar8 == 0)) goto LAB_023c89b8;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*(long *)(param_1 + 0x58),0);
    if (*(long *)(param_1 + 0x58) != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(*(long *)(param_1 + 0x58),1,0);
      if (*(long *)(param_1 + 0x58) != 0) {
        UnityEngine_CanvasGroup__set_interactable_467aec4(*(long *)(param_1 + 0x58),1,0);
        return;
      }
    }
  }
LAB_023c89b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

