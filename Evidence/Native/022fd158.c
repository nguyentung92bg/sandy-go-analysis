/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Create
Dino_BusSand_App_UI_UIManager_o* Dino_BusSand_App_UI_UIManager__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Create
   Dino_BusSand_App_UI_UIManager_o* Dino_BusSand_App_UI_UIManager__Create (UnityEngine_Transform_o*
   parent, const MethodInfo* method); */

long Dino_BusSand_App_UI_UIManager__Create_21fd158(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cab490;
  if ((bRam0000000004f9bc74 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1a20);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb1a28);
    bRam0000000004f9bc74 = 1;
  }
  puVar3 = PTR_DAT_04cb1a28;
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_UiAssets__Prefab_21513b8(*(undefined8 *)puVar3,0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  puVar2 = PTR_DAT_04cad390;
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar6,*(undefined8 *)puVar3,0);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = UnityEngine_Object__Instantiate_object__2805310(uVar4,param_1,0,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_04cb1a20;
  if (lVar6 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar6,*(undefined8 *)puVar3,0);
    lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar6,*(undefined8 *)puVar2);
    if (lVar6 != 0) {
      Dino_BusSand_App_UI_UIManager__Init_21fd2c4();
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

