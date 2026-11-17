/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ApplyCameraPreset
void Dino_BusSand_App_UI_HallScene__ApplyCameraPreset (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ApplyCameraPreset
   void Dino_BusSand_App_UI_HallScene__ApplyCameraPreset (Dino_BusSand_App_UI_HallScene_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__ApplyCameraPreset_22d0e24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 in_s3;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  
  if ((bRam0000000004f9c3b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac6d8);
    bRam0000000004f9c3b4 = 1;
  }
  puVar1 = PTR_DAT_04cac6d8;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x20),0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
      lVar3 = *(long *)puVar1;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0xb8);
    fVar8 = *(float *)(puVar4 + 1);
    uVar9 = *puVar4;
    uVar10 = *(undefined8 *)((long)puVar4 + 0xc);
    fVar11 = *(float *)((long)puVar4 + 0x14);
    fVar6 = (float)((ulong)puVar4[3] >> 0x20) * 0.017453292;
    fVar7 = *(float *)(puVar4 + 4) * _UNK_00e20a74;
    uVar5 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                      ((float)puVar4[3] * 0.017453292,fVar6,fVar7,0);
    if (lVar2 != 0) {
      UnityEngine_Transform__SetPositionAndRotation_43d2064
                ((float)uVar9 + (float)uVar10,
                 (float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar10 >> 0x20),fVar8 + fVar11,uVar5
                 ,fVar6,fVar7,in_s3,lVar2,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        UnityEngine_Camera__set_orthographic_4356b20(*(long *)(param_1 + 0x20),0,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_Camera__set_fieldOfView_4355f50(0x42700000,*(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x20) != 0) {
            UnityEngine_Camera__set_nearClipPlane_4355c40(_UNK_00e207cc,*(long *)(param_1 + 0x20),0)
            ;
            if (*(long *)(param_1 + 0x20) != 0) {
              UnityEngine_Camera__set_farClipPlane_4355dc8(0x447a0000,*(long *)(param_1 + 0x20),0);
              if (*(long *)(param_1 + 0x20) != 0) {
                UnityEngine_Camera__set_clearFlags_4358bd4(*(long *)(param_1 + 0x20),2,0);
                if (*(long *)(param_1 + 0x20) != 0) {
                  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
                  UnityEngine_Camera__set_backgroundColor_4358a4c
                            (*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x28),
                             *(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x30),
                             *(long *)(param_1 + 0x20),0);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    UnityEngine_Camera__set_cullingMask_435768c
                              (*(long *)(param_1 + 0x20),0xbfffffff,0);
                    lVar2 = *(long *)(param_1 + 0x20);
                    if (lVar2 != 0) {
                      if ((bRam0000000004fa5bc0 & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cf6278,0);
                        bRam0000000004fa5bc0 = 1;
                      }
                      if (lVar2 != 0) {
                        lVar3 = *(long *)(lVar2 + 0x10);
                        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                    (lVar2,0);
                        }
                        if (pcRam0000000004fa5d80 == (code *)0x0) {
                          pcRam0000000004fa5d80 = (code *)FUN_02132f40(&UNK_00e2c926);
                        }
                    /* WARNING: Could not recover jumptable at 0x0445726c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000004fa5d80)(0xbf800000,lVar3);
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

