/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Ensure
Dino_BusSand_Cheat_CheatManager_o* Dino_BusSand_Cheat_CheatManager__Ensure (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Ensure
   Dino_BusSand_Cheat_CheatManager_o* Dino_BusSand_Cheat_CheatManager__Ensure (const MethodInfo*
   method); */

long * Dino_BusSand_Cheat_CheatManager__Ensure_23650a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plStack_28;
  
  puVar2 = PTR_DAT_04cba458;
  if ((bRam0000000004f9c750 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cba8f0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba8f8);
    bRam0000000004f9c750 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c7a5 == '\0') {
    FUN_02132f7c(PTR_DAT_04cba458);
    cRam0000000004f9c7a5 = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar8 = *(long *)puVar1;
  uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 02465168 to 0256516f has its CatchHandler @ 02465374 */
    thunk_FUN_0218fdac(lVar8);
  }
                    /* try { // try from 02465170 to 0256535f has its CatchHandler @ 02465034 */
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  puVar3 = PTR_DAT_04cba8f8;
  if ((uVar6 & 1) == 0) {
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__DontDestroyOnLoad_43c8450(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *(long *)PTR_DAT_04cba8f0;
    puVar9 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_0216b4cc(lVar8);
      puVar9 = *(undefined8 **)(lVar8 + 0x38);
    }
    uVar10 = *puVar9;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = System_Type__GetTypeFromHandle_483f0b4(uVar10,0);
    plVar7 = (long *)UnityEngine_GameObject__AddComponent_43c0d20(lVar5,uVar10,0);
    lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470(lVar5);
    }
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar6 = FUN_0219428c(lVar5,lVar8);
      if ((uVar6 & 1) == 0) {
        if ((*(ushort *)(lVar8 + 0x135) >> 0xc & 1) == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          if (((((*(byte *)(lVar5 + 0x118) >> 5 & 1) != 0) || (*(char *)(lVar5 + 0x2a) == '\x1e'))
              || (*(char *)(lVar5 + 0x2a) == '\x13')) &&
             ((*(long *)(lVar5 + 0x70) != 0 &&
              (lVar8 = *(long *)(*(long *)(lVar5 + 0x70) + 0x28), lVar8 != 0)))) {
            plStack_28 = (long *)FUN_0217e1c0(plVar7,lVar8);
            if (plStack_28 != (long *)0x0) {
              return plVar7;
            }
            iVar4 = (*(code *)**(undefined8 **)plVar7[2])((undefined8 *)plVar7[2],lVar8,&plStack_28)
            ;
            if (-1 < iVar4) {
              uVar6 = FUN_0217e250(plVar7,lVar8,plStack_28);
              if ((uVar6 & 1) == 0) {
                (**(code **)(*plStack_28 + 0x10))();
                plStack_28 = (long *)FUN_0217e1c0(plVar7,lVar8);
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
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c7a5 == '\0') {
    FUN_02132f7c(PTR_DAT_04cba458);
    cRam0000000004f9c7a5 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  return *(long **)(*(long *)(lVar5 + 0xb8) + 0x18);
}

