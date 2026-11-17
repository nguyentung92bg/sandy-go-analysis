/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig$$Install
void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig$$Install
   void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Install (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Install_2436db4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined1 auStack_44 [4];
  
  puVar2 = PTR_DAT_04cbf300;
  puVar1 = PTR_DAT_04cbf2f8;
  if ((bRam0000000004f9cc4f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cbf230);
    FUN_02132f7c(PTR_DAT_04cbf238);
    FUN_02132f7c(PTR_DAT_04cbf240);
    FUN_02132f7c(PTR_DAT_04cbf308);
    FUN_02132f7c(PTR_DAT_04cbf2f8);
    FUN_02132f7c(PTR_DAT_04cbf310);
    FUN_02132f7c(PTR_DAT_04cbf300);
    bRam0000000004f9cc4f = 1;
  }
  auStack_44[0] = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar3,0);
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    return;
  }
  lVar4 = thunk_FUN_0216e89c();
  Dino_BusSand_Sdk_SandBusEconomyRemoteConfig___ctor_2437038();
  **(long **)(*(long *)puVar1 + 0xb8) = lVar4;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar4);
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 0x10);
    *plVar10 = lVar4;
    thunk_FUN_02134474(plVar10,lVar4);
    Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__DropStaleCache_2437080();
    puVar1 = PTR_DAT_04caa458;
    lVar4 = *plVar10;
    if (lVar4 != 0) {
      plVar11 = (long *)(lVar4 + 0x38);
      lVar12 = *plVar11;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar5,lVar4,*(undefined8 *)PTR_DAT_04cbf308,0);
      plVar6 = (long *)System_Delegate__Combine_4872324(lVar12,uVar5,0);
      if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar6);
      }
      *plVar11 = (long)plVar6;
      thunk_FUN_02134474(plVar11,plVar6);
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action___ctor_47b5ed0(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cbf310,0);
      puVar1 = PTR_DAT_04cb1d58;
      lVar3 = *(long *)PTR_DAT_04cb1d58;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      puVar7 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20);
      *puVar7 = uVar5;
      thunk_FUN_02134474(puVar7,uVar5);
      plVar6 = (long *)*plVar10;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04cbf230) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02536fe4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04cbf230,0);
LAB_02536fe4:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (*plVar10 != 0) {
          auStack_44[0] = Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Schedule_243721c();
          Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_44,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

