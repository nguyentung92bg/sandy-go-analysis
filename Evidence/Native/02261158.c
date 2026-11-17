/* IL2CPP: Dino.BusSand.App.Tween$$Float
Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Float (float from, float to, float duration, System_Action_float__o* setter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Tween$$Float
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Float (float from, float to, float duration,
   System_Action_float__o* setter, const MethodInfo* method); */

long Dino_BusSand_App_Tween__Float_2161158
               (undefined4 param_1,undefined4 param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04cac200;
  if ((bRam0000000004f9b823 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cac210);
    FUN_02132f7c(PTR_DAT_04cac200);
    bRam0000000004f9b823 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar5,0);
  puVar3 = PTR_DAT_04cac210;
  puVar2 = PTR_DAT_04cac208;
  puVar1 = PTR_DAT_04cac1e8;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_4;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),param_4);
    uVar6 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar5 + 0x18) = param_1;
    *(undefined4 *)(lVar5 + 0x1c) = param_2;
    uVar6 = thunk_FUN_0216e89c(uVar6);
    System_Action_float____ctor_35f1448(uVar6,lVar5,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cac1f0;
    puVar1 = PTR_DAT_04cac1e8;
    if ((bRam0000000004f9b822 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac1f0);
      FUN_02132f7c(PTR_DAT_04cac1e8);
      bRam0000000004f9b822 = 1;
    }
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    *(undefined1 *)(lVar5 + 0x10) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 1;
    System_Object___ctor_4870e5c(lVar5,0);
    fVar7 = _UNK_00e20948;
    *(undefined8 *)(lVar5 + 0x38) = uVar6;
    if (fVar7 <= param_3) {
      fVar7 = param_3;
    }
    *(float *)(lVar5 + 0x24) = fVar7;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38),uVar6);
    lVar4 = *(long *)puVar2;
    *(undefined4 *)(lVar5 + 0x2c) = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_TweenRunner__Add_2161044(lVar5);
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

