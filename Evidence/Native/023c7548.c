/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$Project
bool Dino_BusSand_App_UI_GuideDimHoles__Project (UnityEngine_Camera_o* cam, UnityEngine_Vector2_o* min, UnityEngine_Vector2_o* max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$Project
   bool Dino_BusSand_App_UI_GuideDimHoles__Project (UnityEngine_Camera_o* cam,
   UnityEngine_Vector2_o* min, UnityEngine_Vector2_o* max, const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_GuideDimHoles__Project_22c7548(long param_1,ulong *param_2,ulong *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  
  puVar1 = PTR_DAT_04cb68f0;
  if ((bRam0000000004f9c361 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68f0);
    bRam0000000004f9c361 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar4 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      pfVar5 = (float *)(lVar2 + 0x28);
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (param_1 == 0) goto LAB_023c764c;
        fVar8 = pfVar5[-1];
        fVar10 = *pfVar5;
        fVar7 = (float)UnityEngine_Camera__WorldToScreenPoint_435c56c(pfVar5[-2],param_1,0);
        if (0.0 < fVar10) {
          uVar3 = CONCAT44(fVar8,fVar7);
          uVar9 = *param_2;
          uVar6 = 1;
          *param_2 = uVar9 ^ (uVar9 ^ uVar3) &
                             ~CONCAT44(-(uint)((float)(uVar9 >> 0x20) < fVar8),
                                       -(uint)((float)uVar9 < fVar7));
          uVar9 = *param_3;
          *param_3 = uVar3 ^ (uVar3 ^ uVar9) &
                             CONCAT44(-(uint)(fVar8 < (float)(uVar9 >> 0x20)),
                                      -(uint)(fVar7 < (float)uVar9));
        }
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
        pfVar5 = pfVar5 + 3;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    return uVar6;
  }
LAB_023c764c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

