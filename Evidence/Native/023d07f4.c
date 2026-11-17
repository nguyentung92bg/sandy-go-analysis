/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$SetAutoSize
void Dino_BusSand_App_UI_CommonNamePlateView__SetAutoSize (UnityEngine_Transform_o* node, float max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$SetAutoSize
   void Dino_BusSand_App_UI_CommonNamePlateView__SetAutoSize (UnityEngine_Transform_o* node, float
   max, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonNamePlateView__SetAutoSize_22d07f4(float param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3ad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3ad = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar3 & 1) == 0) {
    if ((param_2 == 0) ||
       (lVar4 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (param_2,1,*(undefined8 *)PTR_DAT_04cada48), lVar4 == 0)) {
LAB_023d0904:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar5 = *(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_023d0904;
        TMPro_TMP_Text__set_enableAutoSizing_42cc454(lVar5,1,0);
        TMPro_TMP_Text__set_fontSizeMax_42cc4f0(param_1,lVar5,0);
        if (param_1 < *(float *)(lVar5 + 0x278)) {
          TMPro_TMP_Text__set_fontSizeMin_42cc4a4(param_1,lVar5,0);
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
  }
  return;
}

