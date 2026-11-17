/* IL2CPP: Dino.BusSand.App.UI.HallScene$$Create
Dino_BusSand_App_UI_HallScene_o* Dino_BusSand_App_UI_HallScene__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$Create
   Dino_BusSand_App_UI_HallScene_o* Dino_BusSand_App_UI_HallScene__Create (UnityEngine_Transform_o*
   parent, const MethodInfo* method); */

long Dino_BusSand_App_UI_HallScene__Create_22d0c80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04cb6c50;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c3b3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac840);
    FUN_02132f7c(PTR_DAT_04cb6c58);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6c50);
    FUN_02132f7c(PTR_DAT_04cb6c60);
    FUN_02132f7c(PTR_DAT_04cb6c68);
    bRam0000000004f9c3b3 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar4,*(undefined8 *)puVar2,0);
  if ((lVar4 != 0) &&
     (lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0), puVar3 = PTR_DAT_04cb6c60,
     puVar2 = PTR_DAT_04cb6c58, lVar5 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar5,param_1,0,0);
    lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar2);
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_GameObject___ctor_43c20cc(lVar6,*(undefined8 *)puVar3,0);
    if (lVar6 != 0) {
      lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
      uVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
      puVar2 = PTR_DAT_04cb6c68;
      puVar1 = PTR_DAT_04cac840;
      if (lVar7 != 0) {
        UnityEngine_Transform__SetParent_43d1e34(lVar7,uVar8,0,0);
        UnityEngine_GameObject__set_tag_43bd3dc(lVar6,*(undefined8 *)puVar2,0);
        lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar6,*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          plVar9 = (long *)(lVar5 + 0x20);
          *plVar9 = lVar4;
          thunk_FUN_02134474(plVar9,lVar4);
          Dino_BusSand_App_UI_HallScene__ApplyCameraPreset_22d0e24(lVar5);
          if (*plVar9 != 0) {
            UnityEngine_Behaviour__set_enabled_43bc50c(*plVar9,0,0);
            return lVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

