/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$RuleColor
UnityEngine_Color_o Dino_BusSand_App_UI_KitAdopt__RuleColor (UnityEngine_Color_o c, UnityEngine_Color_o b, UnityEngine_Color_o p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$RuleColor
   UnityEngine_Color_o Dino_BusSand_App_UI_KitAdopt__RuleColor (UnityEngine_Color_o c,
   UnityEngine_Color_o b, UnityEngine_Color_o p, const MethodInfo* method); */

float Dino_BusSand_App_UI_KitAdopt__RuleColor_228027c
                (float param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                float param_6,float param_7,float param_8)

{
  float fVar1;
  undefined *puVar2;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack_54;
  
  if ((bRam0000000004f9c139 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7b8);
    bRam0000000004f9c139 = 1;
  }
  puVar2 = PTR_DAT_04cad7b8;
  fStack_54 = param_1;
  if (((fStack0000000000000000 != param_5) || (fStack0000000000000004 != param_6)) ||
     (fStack0000000000000008 != param_7)) {
    if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar1 = _UNK_00e20448;
    if (ABS(param_1 - param_5) < _UNK_00e20448) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (ABS(param_2 - param_6) < fVar1) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (ABS(param_3 - param_7) < fVar1) {
          fStack_54 = fStack0000000000000000;
        }
      }
    }
  }
  if (fStack000000000000000c != param_8) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_KitAdopt__Rule_2280080(param_4,param_8,fStack000000000000000c);
  }
  return fStack_54;
}

