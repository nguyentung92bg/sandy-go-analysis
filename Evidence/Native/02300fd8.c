/* IL2CPP: Dino.BusSand.App.UI.UIPanel.<>c__DisplayClass23_0$$<Bind>b__0
void Dino_BusSand_App_UI_UIPanel___c__DisplayClass23_0___Bind_b__0 (Dino_BusSand_App_UI_UIPanel___c__DisplayClass23_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UIPanel.<>c__DisplayClass23_0$$<Bind>b__0
   void Dino_BusSand_App_UI_UIPanel___c__DisplayClass23_0___Bind_b__0
   (Dino_BusSand_App_UI_UIPanel___c__DisplayClass23_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_UIPanel___c__DisplayClass23_0___Bind_b__0_2200fd8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f9bc9f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1bd8);
    bRam0000000004f9bc9f = 1;
  }
  fVar3 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  puVar1 = PTR_DAT_04cb1bd8;
  if (_UNK_00e20328 <= fVar3 - *(float *)(param_1 + 0x10)) {
    uVar4 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar2 = *(long *)puVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(lVar2 + 0x28));
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02301078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

