/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Top
Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_Cheat_QaJourney__Top (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Top
   Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_Cheat_QaJourney__Top (const MethodInfo* method); */

long * Dino_BusSand_Cheat_QaJourney__Top_2370188(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  
  puVar7 = PTR_DAT_04cbafc8;
  if ((bRam0000000004f9c7cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab538);
    FUN_02132f7c(PTR_DAT_04cb96a0);
    FUN_02132f7c(PTR_DAT_04ca9bb0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbafc8);
    FUN_02132f7c(PTR_DAT_04cb1bd8);
    bRam0000000004f9c7cf = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_Cheat_QaJourney__get_Ui_236f96c();
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar14);
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar10 & 1) == 0) {
    lVar14 = *(long *)puVar7;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar14 = *(long *)puVar7;
    }
    uVar10 = System_Reflection_FieldInfo__op_Equality_47732d8
                       (*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x20),0,0);
    if ((uVar10 & 1) == 0) {
      lVar14 = *(long *)puVar7;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar14 = *(long *)puVar7;
      }
      plVar16 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x20);
      uVar9 = Dino_BusSand_Cheat_QaJourney__get_Ui_236f96c();
      if ((plVar16 == (long *)0x0) ||
         (lVar14 = (**(code **)(*plVar16 + 0x2e8))(plVar16,uVar9,*(undefined8 *)(*plVar16 + 0x2f0)),
         puVar4 = PTR_DAT_04ca9bb0, lVar14 == 0)) {
LAB_024704b4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar9 = *(undefined8 *)PTR_DAT_04ca9bb0;
      plVar16 = (long *)thunk_FUN_0216e7a0(lVar14,uVar9);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar14,uVar9);
      }
      lVar14 = *plVar16;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cb96a0) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_02470334;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)PTR_DAT_04cb96a0,1);
LAB_02470334:
      iVar8 = (*(code *)*puVar11)(plVar16,puVar11[1]);
      puVar6 = PTR_DAT_04cb1bd8;
      puVar5 = PTR_DAT_04cab538;
      iVar8 = iVar8 + -1;
      if (-1 < iVar8) {
        do {
          lVar14 = *plVar16;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_024703a4;
              }
              uVar10 = uVar10 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)puVar4,0);
LAB_024703a4:
          plVar12 = (long *)(*(code *)*puVar11)(plVar16,iVar8,puVar11[1]);
          if (plVar12 == (long *)0x0) {
LAB_024703d0:
            plVar12 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
            if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_024703d0;
            if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6) {
              plVar12 = (long *)0x0;
            }
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar12,0,0);
          if ((uVar10 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_024704b4;
            if (*(char *)((long)plVar12 + 0x2c) == '\0') {
              lVar14 = UnityEngine_Component__get_gameObject_43bcde8(plVar12,0);
              if (lVar14 == 0) goto LAB_024704b4;
              uVar10 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar14,0);
              if ((uVar10 & 1) != 0) {
                lVar14 = *(long *)puVar7;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar14 = *(long *)puVar7;
                }
                lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
                plVar13 = (long *)System_Object__GetType_4876970(plVar12,0);
                if ((plVar13 == (long *)0x0) ||
                   (uVar9 = (**(code **)(*plVar13 + 0x1b8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1c0)), lVar14 == 0))
                goto LAB_024704b4;
                uVar10 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                                   (lVar14,uVar9,*(undefined8 *)puVar5);
                if ((uVar10 & 1) == 0) {
                  return plVar12;
                }
              }
            }
          }
          bVar1 = 0 < iVar8;
          iVar8 = iVar8 + -1;
        } while (bVar1);
      }
    }
  }
  return (long *)0x0;
}

