/* IL2CPP: Dino.BusSand.View.RoadLoopDebug$$Attach
Dino_BusSand_View_RoadLoopDebug_o* Dino_BusSand_View_RoadLoopDebug__Attach (UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* layout, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.RoadLoopDebug$$Attach
   Dino_BusSand_View_RoadLoopDebug_o* Dino_BusSand_View_RoadLoopDebug__Attach
   (UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* layout, const MethodInfo*
   method); */

long Dino_BusSand_View_RoadLoopDebug__Attach_23e4364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9ca78 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbda20);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbda28);
    bRam0000000004f9ca78 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Application__get_isEditor_43543ec(0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Debug__get_isDebugBuild_4362220(0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = PTR_DAT_04cbda28;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar1,0);
  if ((lVar3 != 0) &&
     (lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0), puVar1 = PTR_DAT_04cbda20,
     lVar4 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar4,param_1,0,0);
    lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar3,*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x20) = param_2;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20),param_2);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

