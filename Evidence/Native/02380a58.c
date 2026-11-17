/* IL2CPP: Dino.BusSand.App.UI.KitSwing$$Update
void Dino_BusSand_App_UI_KitSwing__Update (Dino_BusSand_App_UI_KitSwing_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitSwing$$Update
   void Dino_BusSand_App_UI_KitSwing__Update (Dino_BusSand_App_UI_KitSwing_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitSwing__Update_2280a58(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 in_s3;
  float fVar3;
  float fVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  fVar3 = *(float *)(param_1 + 0x28);
  fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar3 = fVar3 + fVar2;
  fVar2 = fVar3 * _UNK_00e2082c;
  *(float *)(param_1 + 0x28) = fVar3;
  fVar2 = (float)func_0x049b5320((fVar2 + fVar2) / *(float *)(param_1 + 0x24));
  fVar4 = *(float *)(param_1 + 0x20);
  fVar3 = (float)func_0x049b5320(fVar3 * _UNK_00e1fea8);
  fVar3 = fVar3 * _UNK_00e20328 + _UNK_00e20180;
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  uStack_2c = 0;
  fVar2 = fVar3 * fVar4 * fVar2 * _UNK_00e20a74;
  uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fStack_28 = fVar2;
  uStack_24 = in_s3;
  if ((bRam0000000004fa8b3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3a = 1;
  }
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000004fa8bd0 == (code *)0x0) {
        pcRam0000000004fa8bd0 = (code *)FUN_02132f40(&UNK_00e520b7);
      }
      (*pcRam0000000004fa8bd0)(lVar1,&uStack_30);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

