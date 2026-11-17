/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnSheet
UnityEngine_Vector2_o Dino_BusSand_App_UI_HomeAtelier__OnSheet (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, UnityEngine_Vector2_o uv, UnityEngine_Vector4_o r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnSheet
   UnityEngine_Vector2_o Dino_BusSand_App_UI_HomeAtelier__OnSheet
   (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s,
   UnityEngine_Vector2_o uv, UnityEngine_Vector4_o r, const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_HomeAtelier__OnSheet_22d92e0
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          long param_7,long param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  fVar4 = 1.0;
  if (param_1 <= 1.0) {
    fVar4 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar4;
  }
  fVar4 = 1.0;
  if (param_2 <= 1.0) {
    fVar4 = param_2;
  }
  fVar3 = 0.0;
  if (0.0 <= param_2) {
    fVar3 = fVar4;
  }
  if ((param_8 != 0) && (*(long *)(param_8 + 0x20) != 0)) {
    lVar1 = *(long *)(param_7 + 0x20);
    fVar4 = -((1.0 - (param_4 + (param_6 - param_4) * fVar3)) * *(float *)(param_7 + 0x68));
    uStack_24 = 0;
    uStack_2c = UnityEngine_Transform__TransformPoint_43d3c44
                          ((param_3 + (param_5 - param_3) * fVar2 + -0.5) *
                           *(float *)(param_7 + 100),*(long *)(param_8 + 0x20),0);
    if (lVar1 != 0) {
      fStack_28 = fVar4;
      if ((bRam0000000004fa8b61 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b61 = 1;
      }
      uStack_30 = 0;
      uStack_38 = 0;
      if (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 0x10);
        if (lVar1 != 0) {
          if (pcRam0000000004fa8c98 == (code *)0x0) {
            pcRam0000000004fa8c98 = (code *)FUN_02132f40(&UNK_00e56a3f);
          }
          (*pcRam0000000004fa8c98)(lVar1,&uStack_2c,&uStack_38);
          return (undefined4)uStack_38;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

