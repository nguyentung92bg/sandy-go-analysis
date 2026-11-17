/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<DiveRoutine>d__130$$MoveNext
bool Dino_BusSand_App_UI_HomeAtelier__DiveRoutine_d__130__MoveNext (Dino_BusSand_App_UI_HomeAtelier__DiveRoutine_d__130_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<DiveRoutine>d__130$$MoveNext
   bool Dino_BusSand_App_UI_HomeAtelier__DiveRoutine_d__130__MoveNext
   (Dino_BusSand_App_UI_HomeAtelier__DiveRoutine_d__130_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_HomeAtelier__DiveRoutine_d__130__MoveNext_22db7ac
          (undefined1 param_1 [16],undefined4 param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000004f9c3f0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6eb0);
    FUN_02132f7c(PTR_DAT_04cb6eb8);
    FUN_02132f7c(PTR_DAT_04cb6ec0);
    FUN_02132f7c(PTR_DAT_04cb6ec8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb6ed0);
    bRam0000000004f9c3f0 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  lVar6 = *(long *)(param_5 + 0x20);
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  if (*(int *)(param_5 + 0x10) == 1) {
    fVar8 = *(float *)(param_5 + 0x58);
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar9 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar8 = fVar8 + fVar9 / _UNK_00e200b4;
    *(float *)(param_5 + 0x58) = fVar8;
    if (1.0 <= fVar8) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_023dbca8;
    *(undefined8 *)(lVar6 + 0xd8) = *(undefined8 *)(param_5 + 0x28);
    thunk_FUN_02134474();
    puVar1 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      param_2 = _UNK_00e20180;
      Dino_BusSand_GameAudio__Paper_2385674(_UNK_00e200f8,**(long **)(lVar2 + 0xb8),0);
    }
    if ((*(long *)(param_5 + 0x28) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x18), lVar2 == 0)) goto LAB_023dbca8;
    uVar7 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar2,0);
    *(undefined4 *)(param_5 + 0x30) = uVar7;
    *(undefined4 *)(param_5 + 0x34) = param_2;
    if ((*(long *)(param_5 + 0x28) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x18), lVar2 == 0)) goto LAB_023dbca8;
    uVar7 = UnityEngine_Transform__get_localRotation_43d14b0(lVar2,0);
    *(undefined4 *)(param_5 + 0x38) = uVar7;
    *(undefined4 *)(param_5 + 0x3c) = param_2;
    *(float *)(param_5 + 0x40) = param_3;
    *(float *)(param_5 + 0x44) = param_4;
    if (*(long *)(param_5 + 0x28) == 0) goto LAB_023dbca8;
    lVar2 = *(long *)(lVar6 + 0x20);
    *(undefined4 *)(param_5 + 0x48) = *(undefined4 *)(*(long *)(param_5 + 0x28) + 0x70);
    if (lVar2 == 0) goto LAB_023dbca8;
    UnityEngine_RectTransform__get_rect_43cf450(lVar2,0);
    if (*(long *)(lVar6 + 0x20) == 0) goto LAB_023dbca8;
    UnityEngine_RectTransform__get_rect_43cf450(*(long *)(lVar6 + 0x20),0);
    fVar9 = *(float *)(lVar6 + 100);
    fVar10 = *(float *)(lVar6 + 0x68);
    *(undefined4 *)(param_5 + 0x50) = 0;
    fVar8 = 1.0;
    if (1.0 <= fVar9) {
      fVar8 = fVar9;
    }
    fVar8 = (param_3 * _UNK_00e208e0) / fVar8;
    fVar9 = 1.5;
    if (1.5 <= fVar8) {
      fVar9 = fVar8;
    }
    *(float *)(param_5 + 0x4c) = fVar9;
    *(float *)(param_5 + 0x54) = fVar10 * fVar9 * 0.5 - param_4 * 0.5;
    if ((*(long *)(param_5 + 0x28) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x18), lVar2 == 0)) goto LAB_023dbca8;
    UnityEngine_Transform__SetAsLastSibling_43d4684(lVar2,0);
    fVar8 = 0.0;
    *(undefined4 *)(param_5 + 0x58) = 0;
  }
  if ((*(long *)(param_5 + 0x28) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x18), lVar2 != 0)) {
    fVar9 = fVar8 * fVar8 * (3.0 - (fVar8 + fVar8));
    fVar10 = (float)*(undefined8 *)(param_5 + 0x30);
    fVar8 = (float)((ulong)*(undefined8 *)(param_5 + 0x30) >> 0x20);
    fVar8 = fVar8 + ((float)((ulong)*(undefined8 *)(param_5 + 0x50) >> 0x20) - fVar8) * fVar9;
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (CONCAT44(fVar8,fVar10 + ((float)*(undefined8 *)(param_5 + 0x50) - fVar10) * fVar9),
               fVar8,lVar2,0);
    if (*(long *)(param_5 + 0x28) != 0) {
      uVar7 = *(undefined4 *)(param_5 + 0x38);
      uVar11 = *(undefined4 *)(param_5 + 0x3c);
      uVar12 = *(undefined4 *)(param_5 + 0x40);
      uVar13 = *(undefined4 *)(param_5 + 0x44);
      lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x18);
      if (cRam0000000004f9b88b == '\0') {
        FUN_02132f7c(PTR_DAT_04cab4b0);
        cRam0000000004f9b88b = '\x01';
      }
      puVar4 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
      UnityEngine_Quaternion__Slerp_43aee54
                (uVar7,uVar11,uVar12,uVar13,*puVar4,puVar4[1],puVar4[2],puVar4[3],0);
      if (lVar2 != 0) {
        UnityEngine_Transform__set_localRotation_43d156c(lVar2,0);
        if (*(long *)(param_5 + 0x28) != 0) {
          lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x18);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar2 != 0) {
            lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
            fVar8 = 1.0;
            if (fVar9 * fVar9 <= 1.0) {
              fVar8 = fVar9 * fVar9;
            }
            fVar8 = fVar8 * (*(float *)(param_5 + 0x4c) + -1.0) + 1.0;
            UnityEngine_Transform__set_localScale_43d1be0
                      (*(float *)(lVar5 + 0xc) * fVar8,*(float *)(lVar5 + 0x10) * fVar8,
                       *(float *)(lVar5 + 0x14) * fVar8,lVar2,0);
            lVar2 = *(long *)(param_5 + 0x28);
            if (lVar2 != 0) {
              lVar5 = *(long *)(lVar2 + 0x20);
              *(undefined4 *)(lVar2 + 0x74) = 0;
              fVar8 = 1.0;
              if (fVar9 <= 1.0) {
                fVar8 = fVar9;
              }
              fVar10 = 0.0;
              if (0.0 <= fVar9) {
                fVar10 = fVar8;
              }
              *(float *)(lVar2 + 0x70) =
                   *(float *)(param_5 + 0x48) + fVar10 * (0.0 - *(float *)(param_5 + 0x48));
              if (lVar5 != 0) {
                uVar7 = cosf();
                UnityEngine_Transform__set_localScale_43d1be0(0x3f800000,uVar7,0x3f800000,lVar5,0);
                if (((lVar6 != 0) && (*(long *)(lVar6 + 0x78) != 0)) &&
                   (lVar2 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                                      (*(long *)(lVar6 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0),
                   lVar2 != 0)) {
                  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
                            (&uStack_68,lVar2,*(undefined8 *)PTR_DAT_04cb6ed0);
                  puVar1 = PTR_DAT_04cb6ec0;
                  while (uVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                                           (&uStack_68,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
                    if (lStack_58 != *(long *)(param_5 + 0x28)) {
                      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      if (*(long *)(lStack_58 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      UnityEngine_CanvasGroup__set_alpha_467ad3c
                                (1.0 - fVar9,*(long *)(lStack_58 + 0x68),0);
                    }
                  }
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
                            (&uStack_68,*(undefined8 *)PTR_DAT_04cb6eb8);
                  if (*(long *)(lVar6 + 0xe0) != 0) {
                    UnityEngine_CanvasGroup__set_alpha_467ad3c
                              (1.0 - fVar9,*(long *)(lVar6 + 0xe0),0);
                    *(undefined8 *)(param_5 + 0x18) = 0;
                    thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
                    *(undefined4 *)(param_5 + 0x10) = 1;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_023dbca8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

