/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Create
Dino_BusSand_App_Gameplay_GameplayController_o* Dino_BusSand_App_Gameplay_GameplayController__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Create
   Dino_BusSand_App_Gameplay_GameplayController_o*
   Dino_BusSand_App_Gameplay_GameplayController__Create (UnityEngine_Transform_o* parent, const
   MethodInfo* method); */

long * Dino_BusSand_App_Gameplay_GameplayController__Create_229ca6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plStack_28;
  
  puVar2 = PTR_DAT_04cb5808;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c233 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5810);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb5808);
    bRam0000000004f9c233 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar2,0);
  if ((lVar5 == 0) ||
     (lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0), puVar1 = PTR_DAT_04cb5810,
     lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Transform__SetParent_43d1e34(lVar6,param_1,0,0);
  lVar6 = *(long *)puVar1;
  puVar8 = *(undefined8 **)(lVar6 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0216b4cc(lVar6);
    puVar8 = *(undefined8 **)(lVar6 + 0x38);
  }
  uVar9 = *puVar8;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
  plVar7 = (long *)UnityEngine_GameObject__AddComponent_43c0d20(lVar5,uVar9,0);
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0216b470(lVar5);
  }
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar4 = FUN_0219428c(lVar5,lVar6);
    if ((uVar4 & 1) == 0) {
      if ((*(ushort *)(lVar6 + 0x135) >> 0xc & 1) == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        if (((((*(byte *)(lVar5 + 0x118) >> 5 & 1) != 0) || (*(char *)(lVar5 + 0x2a) == '\x1e')) ||
            (*(char *)(lVar5 + 0x2a) == '\x13')) &&
           ((*(long *)(lVar5 + 0x70) != 0 &&
            (lVar6 = *(long *)(*(long *)(lVar5 + 0x70) + 0x28), lVar6 != 0)))) {
          plStack_28 = (long *)FUN_0217e1c0(plVar7,lVar6);
          if (plStack_28 != (long *)0x0) {
            return plVar7;
          }
          iVar3 = (*(code *)**(undefined8 **)plVar7[2])((undefined8 *)plVar7[2],lVar6,&plStack_28);
          if (-1 < iVar3) {
            uVar4 = FUN_0217e250(plVar7,lVar6,plStack_28);
            if ((uVar4 & 1) == 0) {
              (**(code **)(*plStack_28 + 0x10))();
              plStack_28 = (long *)FUN_0217e1c0(plVar7,lVar6);
            }
            if (plStack_28 != (long *)0x0) {
              return plVar7;
            }
          }
        }
        if (lRam0000000004faee08 != lVar5) {
          plVar7 = (long *)0x0;
        }
      }
    }
  }
  return plVar7;
}

