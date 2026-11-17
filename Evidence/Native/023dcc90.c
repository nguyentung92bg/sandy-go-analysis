/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<Pour>d__117$$MoveNext
bool Dino_BusSand_App_UI_HomeAtelier__Pour_d__117__MoveNext (Dino_BusSand_App_UI_HomeAtelier__Pour_d__117_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<Pour>d__117$$MoveNext
   bool Dino_BusSand_App_UI_HomeAtelier__Pour_d__117__MoveNext
   (Dino_BusSand_App_UI_HomeAtelier__Pour_d__117_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_HomeAtelier__Pour_d__117__MoveNext_22dcc90
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  
  if ((bRam0000000004f9c3f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7068);
    FUN_02132f7c(PTR_DAT_04cb7070);
    FUN_02132f7c(PTR_DAT_04cb7078);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb7080);
    FUN_02132f7c(PTR_DAT_04cb7088);
    FUN_02132f7c(PTR_DAT_04cb70f0);
    FUN_02132f7c(PTR_DAT_04cb70f8);
    FUN_02132f7c(PTR_DAT_04cb7100);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb70e0);
    bRam0000000004f9c3f3 = 1;
  }
  lVar14 = *(long *)(param_3 + 0x20);
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  if (*(int *)(param_3 + 0x10) == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (lVar14 == 0) goto LAB_023dd694;
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x100) == 0)) goto LAB_023dd694;
    Dino_BusSand_App_UI_HomeStage__Buck_22ef938(0x3f800000,*(long *)(lVar14 + 0x100),0);
    puVar4 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    if (**(long **)(lVar8 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Whoosh_2382bbc(0x3fa00000,**(long **)(lVar8 + 0xb8),0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(1,0);
    if (*(long *)(lVar14 + 0x100) == 0) goto LAB_023dd694;
    uVar17 = Dino_BusSand_App_UI_HomeStage__TopIn_22eff74
                       (*(long *)(lVar14 + 0x100),*(undefined8 *)(lVar14 + 0x20),0);
    *(undefined4 *)(param_3 + 0x50) = uVar17;
    *(undefined4 *)(param_3 + 0x54) = param_2;
    fVar19 = _UNK_00e20a94;
    fVar27 = _UNK_00e201f4;
    fVar18 = *(float *)(lVar14 + 0x70);
    *(undefined4 *)(param_3 + 0x58) = 0x3d7b823f;
    *(undefined4 *)(param_3 + 0x60) = 0x3f7047dc;
    *(undefined4 *)(param_3 + 0x68) = 0;
    *(undefined2 *)(param_3 + 0x74) = 0;
    fVar18 = 1.0 / fVar18 + fVar19 + fVar27;
    *(undefined8 *)(param_3 + 0x6c) = _UNK_00e69830;
    *(float *)(param_3 + 100) = 1.0 - fVar19 / fVar18;
    *(float *)(param_3 + 0x5c) = fVar27 / fVar18;
  }
  puVar4 = PTR_DAT_04ca9ae8;
  if (*(char *)(lVar14 + 0x9d) == '\0') {
    fVar27 = *(float *)(param_3 + 0x6c);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar19 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar27 = fVar27 + fVar19;
    fVar19 = fVar27 + fVar27;
    *(float *)(param_3 + 0x6c) = fVar27;
    fVar27 = 1.0;
    if (fVar19 <= 1.0) {
      fVar27 = fVar19;
    }
    fVar18 = 1.0;
    if (0.0 <= fVar19) {
      fVar18 = 1.0 - fVar27;
    }
    fVar27 = (float)func_0x049b5300(fVar18,_UNK_00e205ec);
    if (cRam0000000004f9ba93 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9ba93 = '\x01';
    }
    fVar27 = (1.0 - fVar27) * 90.0;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar11 = (int)fVar27;
    if (0x59 < iVar11) {
      iVar11 = 0x5a;
    }
    iVar12 = *(int *)(param_3 + 0x68);
    if ((float)(int)fVar27 != INFINITY && iVar12 < iVar11) {
      do {
        Dino_BusSand_App_UI_HomeAtelier__Throw_22d9374
                  (*(undefined4 *)(param_3 + 0x50),*(undefined4 *)(param_3 + 0x54),
                   ((float)iVar12 / 2.0) / 90.0,lVar14,*(undefined8 *)(param_3 + 0x28));
        iVar12 = *(int *)(param_3 + 0x68) + 1;
        *(int *)(param_3 + 0x68) = iVar12;
      } while (iVar12 < iVar11);
    }
    if (*(char *)(param_3 + 0x75) == '\0') {
      if (*(long *)(lVar14 + 0x100) == 0) goto LAB_023dd694;
      Dino_BusSand_App_UI_HomeStage__Pouring_22ef8e8
                ((float)iVar12 / -90.0 + 1.0,*(undefined4 *)(param_3 + 0x30),
                 *(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0x38),
                 *(undefined4 *)(param_3 + 0x3c),*(long *)(lVar14 + 0x100),0);
      if (((*(char *)(param_3 + 0x75) == '\0') && (0x59 < *(int *)(param_3 + 0x68))) &&
         (_UNK_00e20b08 < *(float *)(param_3 + 0x6c))) {
        *(undefined1 *)(param_3 + 0x75) = 1;
        if (*(long *)(lVar14 + 0x100) == 0) goto LAB_023dd694;
        Dino_BusSand_App_UI_HomeStage__CloseRoof_22ef950(*(long *)(lVar14 + 0x100),0);
      }
    }
    puVar7 = PTR_DAT_04cb7100;
    puVar6 = PTR_DAT_04cad568;
    puVar5 = PTR_DAT_04caa208;
    fVar3 = _UNK_00e20a74;
    fVar2 = _UNK_00e20994;
    fVar1 = _UNK_00e208cc;
    fVar18 = _UNK_00e20540;
    fVar19 = _UNK_00e20104;
    fVar27 = _UNK_00e20094;
    if (*(long *)(lVar14 + 0x128) == 0) goto LAB_023dd694;
    iVar11 = *(int *)(*(long *)(lVar14 + 0x128) + 0x18);
    if (-1 < iVar11 + -1) {
      do {
        if (*(long *)(lVar14 + 0x128) == 0) goto LAB_023dd694;
        iVar11 = iVar11 + -1;
        lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(lVar14 + 0x128),iVar11,*(undefined8 *)puVar7);
        if (lVar8 == 0) goto LAB_023dd694;
        fVar28 = (*(float *)(param_3 + 0x6c) - *(float *)(lVar8 + 0x30)) / fVar19;
        if (0.0 <= fVar28) {
          if (1.0 <= fVar28) {
            if (*(float *)(param_3 + 0x70) < 0.0) {
              *(float *)(param_3 + 0x70) = *(float *)(param_3 + 0x6c);
              if (*(long *)(param_3 + 0x28) == 0) goto LAB_023dd694;
              uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x48);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
              if ((uVar9 & 1) != 0) {
                if ((*(long *)(param_3 + 0x28) == 0) ||
                   (lVar16 = *(long *)(*(long *)(param_3 + 0x28) + 0x48), lVar16 == 0))
                goto LAB_023dd694;
                UnityEngine_Material__SetVector_4383100
                          (*(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c),0,0,lVar16,
                           *(undefined8 *)PTR_DAT_04cb70e0,0);
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b94e == '\0') {
                FUN_02132f7c(puVar6);
                cRam0000000004f9b94e = '\x01';
              }
              lVar16 = *(long *)puVar6;
              if (*(int *)(lVar16 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar16 = *(long *)puVar6;
              }
              if (**(long **)(lVar16 + 0xb8) != 0) {
                Dino_BusSand_GameAudio__PaintBloom_238459c(0,**(long **)(lVar16 + 0xb8),3,0);
                lVar16 = *(long *)puVar6;
              }
              if (*(int *)(lVar16 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b94e == '\0') {
                FUN_02132f7c(puVar6);
                cRam0000000004f9b94e = '\x01';
              }
              lVar16 = *(long *)puVar6;
              if (*(int *)(lVar16 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar16 = *(long *)puVar6;
              }
              if (**(long **)(lVar16 + 0xb8) != 0) {
                Dino_BusSand_GameAudio__PaintPatter_23857ec(0,**(long **)(lVar16 + 0xb8),0);
              }
            }
            lVar16 = *(long *)(lVar8 + 0x10);
            fVar28 = ((fVar28 + -1.0) * fVar19) / fVar1;
            if (1.0 <= fVar28) {
              if (lVar16 == 0) goto LAB_023dd694;
              uVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              UnityEngine_Object__Destroy_43c8114(uVar15,0);
              if (*(long *)(lVar14 + 0x128) == 0) goto LAB_023dd694;
              System_Collections_Generic_List_object___RemoveAt_3a833a0
                        (*(long *)(lVar14 + 0x128),iVar11,*(undefined8 *)PTR_DAT_04cb70f0);
            }
            else {
              Dino_BusSand_App_UI_HomeAtelier__OnSheet_22d92e0
                        (*(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c),
                         *(undefined4 *)(param_3 + 0x58),*(undefined4 *)(param_3 + 0x5c),
                         *(undefined4 *)(param_3 + 0x60),*(undefined4 *)(param_3 + 100),lVar14,
                         *(undefined8 *)(param_3 + 0x28));
              if (lVar16 == 0) goto LAB_023dd694;
              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(lVar16,0);
              lVar16 = *(long *)(lVar8 + 0x10);
              if (cRam0000000004f9b65e == '\0') {
                FUN_02132f7c(puVar5);
                cRam0000000004f9b65e = '\x01';
              }
              if (lVar16 == 0) goto LAB_023dd694;
              lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
              fVar28 = fVar28 * fVar2 + 1.0;
              UnityEngine_Transform__set_localScale_43d1be0
                        (fVar28 * *(float *)(lVar13 + 0xc),fVar28 * *(float *)(lVar13 + 0x10),
                         fVar28 * *(float *)(lVar13 + 0x14),lVar16,0);
              plVar10 = *(long **)(lVar8 + 0x18);
              if (plVar10 == (long *)0x0) goto LAB_023dd694;
              (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
              plVar10 = *(long **)(lVar8 + 0x18);
              if (plVar10 == (long *)0x0) goto LAB_023dd694;
              (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
            }
          }
          else {
            fVar21 = *(float *)(lVar8 + 0x2c);
            fVar20 = (float)Dino_BusSand_App_UI_HomeAtelier__OnSheet_22d92e0
                                      (*(undefined4 *)(lVar8 + 0x28),fVar21,
                                       *(undefined4 *)(param_3 + 0x58),
                                       *(undefined4 *)(param_3 + 0x5c),
                                       *(undefined4 *)(param_3 + 0x60),
                                       *(undefined4 *)(param_3 + 100),lVar14,
                                       *(undefined8 *)(param_3 + 0x28));
            if (*(long *)(lVar8 + 0x10) == 0) goto LAB_023dd694;
            fVar22 = *(float *)(lVar8 + 0x20);
            fVar23 = *(float *)(lVar8 + 0x24);
            fVar24 = 1.0 - fVar28;
            fVar25 = fVar23;
            if (fVar23 <= fVar21) {
              fVar25 = fVar21;
            }
            fVar26 = fVar28 * (fVar24 + fVar24);
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                      (fVar28 * fVar28 * fVar20 +
                       fVar24 * fVar24 * fVar22 +
                       fVar26 * (*(float *)(lVar8 + 0x38) + fVar22 + (fVar20 - fVar22) * 0.5),
                       fVar28 * fVar28 * fVar21 +
                       fVar24 * fVar24 * fVar23 + fVar26 * (*(float *)(lVar8 + 0x34) + fVar25),
                       *(long *)(lVar8 + 0x10),0);
            lVar16 = *(long *)(lVar8 + 0x10);
            UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                      (0,0,fVar28 * *(float *)(lVar8 + 0x3c) * fVar3,0);
            if (lVar16 == 0) goto LAB_023dd694;
            UnityEngine_Transform__set_localRotation_43d156c(lVar16,0);
            lVar8 = *(long *)(lVar8 + 0x10);
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(puVar5);
              cRam0000000004f9b65e = '\x01';
            }
            if (lVar8 == 0) goto LAB_023dd694;
            lVar16 = *(long *)(*(long *)puVar5 + 0xb8);
            fVar20 = 1.0;
            if (fVar28 * 4.0 <= 1.0) {
              fVar20 = fVar28 * 4.0;
            }
            fVar28 = 0.0;
            if (0.0 <= fVar20) {
              fVar28 = fVar20;
            }
            fVar28 = fVar28 * fVar18 + fVar27;
            UnityEngine_Transform__set_localScale_43d1be0
                      (fVar28 * *(float *)(lVar16 + 0xc),fVar28 * *(float *)(lVar16 + 0x10),
                       fVar28 * *(float *)(lVar16 + 0x14),lVar8,0);
          }
        }
      } while (0 < iVar11);
    }
    if (0.0 <= *(float *)(param_3 + 0x70)) {
      fVar19 = (*(float *)(param_3 + 0x6c) - *(float *)(param_3 + 0x70)) / _UNK_00e2038c;
      fVar27 = 1.0;
      if (fVar19 <= 1.0) {
        fVar27 = fVar19;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar19) {
        fVar18 = fVar27;
      }
      fVar27 = (float)func_0x049b5300(1.0 - fVar18,_UNK_00e2032c);
      *(float *)(lVar14 + 0x90) = 1.0 - fVar27;
      if ((*(char *)(param_3 + 0x74) == '\0') && (_UNK_00e1fe38 < fVar18)) {
        *(undefined1 *)(param_3 + 0x74) = 1;
        Dino_BusSand_App_UI_HomeAtelier__Glow_22d999c(lVar14,*(undefined8 *)(param_3 + 0x28));
      }
      if (fVar18 < 1.0) goto LAB_023dd64c;
      if (*(long *)(lVar14 + 0x128) == 0) goto LAB_023dd694;
      if (*(int *)(*(long *)(lVar14 + 0x128) + 0x18) != 0) goto LAB_023dd64c;
    }
    else if (*(float *)(param_3 + 0x6c) <= _UNK_00e20780) {
LAB_023dd64c:
      *(undefined8 *)(param_3 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_3 + 0x18),0);
      *(undefined4 *)(param_3 + 0x10) = 1;
      return 1;
    }
  }
  puVar6 = PTR_DAT_04cb7070;
  puVar5 = PTR_DAT_04cb7068;
  if (*(long *)(lVar14 + 0x128) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_d8,*(long *)(lVar14 + 0x128),*(undefined8 *)PTR_DAT_04cb7088);
    lStack_b0 = lStack_c8;
    puStack_b8 = puStack_d0;
    uStack_c0 = uStack_d8;
    uStack_d8 = 0;
    puStack_d0 = &uStack_c0;
    while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_c0,*(undefined8 *)puVar6), lVar8 = lStack_b0, (uVar9 & 1) != 0
          ) {
      if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar15 = *(undefined8 *)(lStack_b0 + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar15 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x10),0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Object__Destroy_43c8114(uVar15,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_c0,*(undefined8 *)puVar5);
    lVar8 = *(long *)(lVar14 + 0x128);
    if (lVar8 != 0) {
      iVar11 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar11) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar8 + 0x10),0,iVar11,0);
      }
      if (*(char *)(param_3 + 0x75) == '\0') {
        if (*(long *)(lVar14 + 0x100) == 0) goto LAB_023dd694;
        Dino_BusSand_App_UI_HomeStage__CloseRoof_22ef950(*(long *)(lVar14 + 0x100),0);
      }
      if (*(char *)(param_3 + 0x74) == '\0') {
        Dino_BusSand_App_UI_HomeAtelier__Glow_22d999c(lVar14,*(undefined8 *)(param_3 + 0x28));
      }
      *(undefined4 *)(lVar14 + 0x90) = 0x3f800000;
      return 0;
    }
  }
LAB_023dd694:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

