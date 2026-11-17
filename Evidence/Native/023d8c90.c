/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnPointerClick
void Dino_BusSand_App_UI_HomeAtelier__OnPointerClick (Dino_BusSand_App_UI_HomeAtelier_o* __this, UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnPointerClick
   void Dino_BusSand_App_UI_HomeAtelier__OnPointerClick (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__OnPointerClick_22d8c90(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9c3da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6eb0);
    FUN_02132f7c(PTR_DAT_04cb6eb8);
    FUN_02132f7c(PTR_DAT_04cb6ec0);
    FUN_02132f7c(PTR_DAT_04cb6ec8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb6ed0);
    bRam0000000004f9c3da = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  if (param_2 == 0) {
LAB_023d9050:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (((*(char *)(param_2 + 0x145) == '\0') && (*(char *)(param_1 + 200) == '\0')) &&
     (*(char *)(param_1 + 0xd4) == '\0')) {
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (lVar7 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                          (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0), lVar7 == 0))
    goto LAB_023d9050;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_98,lVar7,*(undefined8 *)PTR_DAT_04cb6ed0);
    puVar6 = PTR_DAT_04cb6ec0;
    puVar5 = PTR_DAT_04cabdb0;
    puVar4 = PTR_DAT_04cabda8;
    puStack_78 = puStack_90;
    uStack_80 = uStack_98;
    puStack_90 = &uStack_80;
    lStack_70 = lStack_88;
    uStack_98 = 0;
    do {
      uVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                        (&uStack_80,*(undefined8 *)puVar6);
      lVar7 = lStack_70;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb6eb8);
        if (*(char *)(param_1 + 0xf8) != '\0') {
          return;
        }
        uVar10 = *(undefined8 *)(param_1 + 0x100);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x100) != 0) {
          uVar8 = Dino_BusSand_App_UI_HomeStage__Hits_22f019c
                            (*(undefined4 *)(param_2 + 0x104),*(undefined4 *)(param_2 + 0x108),
                             *(long *)(param_1 + 0x100),0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          Dino_BusSand_App_UI_HomeAtelier__Honked_22d4578(param_1);
          return;
        }
        goto LAB_023d9050;
      }
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lStack_70 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar9 = (long *)UnityEngine_Component__get_transform_43bcd18(*(long *)(lStack_70 + 0x40),0);
      uVar14 = *(undefined4 *)(param_2 + 0x104);
      uVar15 = *(undefined4 *)(param_2 + 0x108);
      uVar10 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera_46969e0(param_2,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar9);
      }
      uVar8 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_467e02c
                        (uVar14,uVar15,plVar9,uVar10,0);
    } while ((uVar8 & 1) == 0);
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_80,*(undefined8 *)PTR_DAT_04cb6eb8);
    if (*(char *)(param_1 + 0xf8) == '\0') {
      if ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x58)) ||
         (_UNK_00e207cc <= ABS(*(float *)(param_1 + 0x5c) - (float)*(int *)(lVar7 + 0x10)))) {
        lVar11 = *(long *)PTR_DAT_04cad568;
        *(float *)(lVar7 + 0x74) = *(float *)(lVar7 + 0x74) + _UNK_00e2053c;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar11 = FUN_022c78f0(0);
        if (lVar11 != 0) {
          Dino_BusSand_GameAudio__Paper_2385674
                    (0x3f400000,*(float *)(lVar7 + 0x80) * _UNK_00e20754 + _UNK_00e2038c,lVar11,0);
        }
        if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Haptics__Play_2388ed8(0,0);
        iVar1 = *(int *)(lVar7 + 0x10);
        iVar2 = *(int *)(param_1 + 0x58);
        iVar3 = iVar2 - iVar1;
        if ((iVar3 == 0 || iVar2 < iVar1) ||
           (ABS(*(float *)(param_1 + 0x5c) - (float)iVar1) <= _UNK_00e207cc)) {
          if (iVar1 <= iVar2) {
            return;
          }
          if (*(float *)(param_1 + 0xb0) <= _UNK_00e207cc) {
            return;
          }
          *(undefined4 *)(param_1 + 0xb8) = 0;
        }
        else {
          fVar12 = 0.0;
          if (0.0 <= (float)(iVar2 + -1)) {
            fVar12 = (float)(iVar2 + -1);
          }
          if ((float)iVar3 <= fVar12) {
            fVar12 = (float)iVar3;
          }
          fVar13 = 0.0;
          if (-1 < iVar3) {
            fVar13 = fVar12;
          }
          *(float *)(param_1 + 0xb8) = fVar13;
        }
        *(undefined1 *)(param_1 + 0xc9) = 1;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x48);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
      }
    }
  }
  return;
}

