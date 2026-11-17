/* IL2CPP: Dino.BusSand.App.UI.HomeTwine$$.ctor
void Dino_BusSand_App_UI_HomeTwine___ctor (Dino_BusSand_App_UI_HomeTwine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeTwine$$.ctor
   void Dino_BusSand_App_UI_HomeTwine___ctor (Dino_BusSand_App_UI_HomeTwine_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeTwine___ctor_22f6a50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  auVar7 = _UNK_00e6bc40;
  *(undefined4 *)(param_1 + 0xe8) = 0x42080000;
  *(long *)(param_1 + 0xe0) = auVar7._8_8_;
  *(long *)(param_1 + 0xd8) = auVar7._0_8_;
  puVar3 = PTR_DAT_04d09e98;
  puVar2 = PTR_DAT_04cad840;
  puVar1 = PTR_DAT_04cabdb8;
  if ((bRam0000000004fac704 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d09e98,0);
    FUN_02132f7c(PTR_DAT_04cad840);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004fac704 = 1;
  }
  uVar5 = *(undefined8 *)puVar3;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  uVar5 = thunk_FUN_0216e89c(uVar5);
  UnityEngine_UI_MaskableGraphic_CullStateChangedEvent___ctor_468be2c();
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xc0),uVar5);
  uVar5 = *(undefined8 *)puVar1;
  *(undefined1 *)(param_1 + 200) = 1;
  uVar5 = FUN_02133068(uVar5,4);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  thunk_FUN_02134474();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004faadf5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cfc8b0,0);
    FUN_02132f7c(PTR_DAT_04cfc8b8);
    FUN_02132f7c(PTR_DAT_04cfc8c0);
    bRam0000000004faadf5 = 1;
  }
  auVar7 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(param_1 + 0x3a) = 0x101;
  *(long *)(param_1 + 0x30) = auVar7._8_8_;
  *(long *)(param_1 + 0x28) = auVar7._0_8_;
  UnityEngine_EventSystems_UIBehaviour___ctor_46ac608(param_1,0);
  plVar6 = (long *)(param_1 + 0x98);
  lVar4 = *plVar6;
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cfc8c0);
    UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween____ctor_2fba138
              (lVar4,*(undefined8 *)PTR_DAT_04cfc8b8);
    *plVar6 = lVar4;
    thunk_FUN_02134474(plVar6,lVar4);
    lVar4 = *plVar6;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  *(long *)(lVar4 + 0x10) = param_1;
  thunk_FUN_02134474((long *)(lVar4 + 0x10),param_1);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}

