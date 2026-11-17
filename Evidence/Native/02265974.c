/* IL2CPP: Dino.BusSand.App.GameApp$$OnDestroy
void Dino_BusSand_App_GameApp__OnDestroy (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$OnDestroy
   void Dino_BusSand_App_GameApp__OnDestroy (Dino_BusSand_App_GameApp_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_GameApp__OnDestroy_2165974(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar5 = PTR_DAT_04cac560;
  puVar4 = PTR_DAT_04cac558;
  puVar3 = PTR_DAT_04cac4a8;
  puVar2 = PTR_DAT_04cac460;
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9b85c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac558);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cac560);
    FUN_02132f7c(PTR_DAT_04cac460);
    FUN_02132f7c(PTR_DAT_04cac4a8);
    FUN_02132f7c(PTR_DAT_04cac568);
    bRam0000000004f9b85c = 1;
  }
  puVar6 = PTR_DAT_04cac568;
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action_Int32Enum____ctor_35ef240(uVar7,param_1,*(undefined8 *)puVar5,0);
  Dino_BusSand_App_Meta_AppUpdate__remove_LateAnswer_2201b44(uVar7,0);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  UnityEngine_Application_LowMemoryCallback___ctor_4354468(uVar7,param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Application__remove_lowMemory_4352ef4(uVar7,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar6;
  }
  **(undefined8 **)(lVar8 + 0xb8) = 0x3ff0000000000000;
  return;
}

