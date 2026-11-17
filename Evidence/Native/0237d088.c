/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Near
bool Dino_BusSand_App_UI_KitAdopt__Near (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Near
   bool Dino_BusSand_App_UI_KitAdopt__Near (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const
   MethodInfo* method); */

bool Dino_BusSand_App_UI_KitAdopt__Near_227d088
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c12b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7b8);
    bRam0000000004f9c12b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar1 = _UNK_00e20448;
  if (ABS(param_1 - param_4) < _UNK_00e20448) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (ABS(param_2 - param_5) < fVar1) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      return ABS(param_3 - param_6) < fVar1;
    }
  }
  return false;
}

