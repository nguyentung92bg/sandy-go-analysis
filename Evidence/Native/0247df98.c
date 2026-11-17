/* IL2CPP: Dino.BusSand.GameAudio$$Awake
void Dino_BusSand_GameAudio__Awake (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$Awake
   void Dino_BusSand_GameAudio__Awake (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
    */

long * Dino_BusSand_GameAudio__Awake_237df98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  
  puVar3 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c824 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cb3db8);
    FUN_02132f7c(PTR_DAT_04cbb8d8);
    FUN_02132f7c(PTR_DAT_04cbb8e0);
    FUN_02132f7c(PTR_DAT_04cbb8e8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbb8f0);
    FUN_02132f7c(PTR_DAT_04cbb8f8);
    bRam0000000004f9c824 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c883 == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9c883 = '\x01';
  }
  puVar8 = PTR_DAT_04cbb8f8;
  puVar5 = PTR_DAT_04cbb8e0;
  puVar1 = PTR_DAT_04cbb8d8;
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar3;
  }
  puVar7 = PTR_DAT_04cbb8f0;
  **(long **)(lVar12 + 0xb8) = param_1;
  puVar6 = PTR_DAT_04cbb8e8;
  puVar4 = PTR_DAT_04cb3db8;
  puVar2 = PTR_DAT_04cab1f0;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),param_1);
  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Func_object____ctor_379de3c(uVar13,param_1,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = System_Threading_Tasks_Task__Run_object__28d2d44(uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x128) = uVar13;
  thunk_FUN_02134474(param_1 + 0x128,uVar13);
  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Func_float____ctor_379e3bc(uVar13,param_1,*(undefined8 *)puVar6,0);
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
  *puVar14 = uVar13;
  thunk_FUN_02134474(puVar14,uVar13);
  puVar3 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c7e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cbb0d0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb0d8);
    bRam0000000004f9c7e3 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar3;
  }
  lVar16 = *(long *)puVar1;
  uVar13 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar16);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  puVar5 = PTR_DAT_04cbb0d8;
  if ((uVar11 & 1) == 0) {
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar12,*(undefined8 *)puVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__DontDestroyOnLoad_43c8450(lVar12,0);
    if (lVar12 != 0) {
      lVar16 = *(long *)PTR_DAT_04cbb0d0;
      puVar14 = *(undefined8 **)(lVar16 + 0x38);
      if (puVar14 == (undefined8 *)0x0) {
        FUN_0216b4cc(lVar16);
        puVar14 = *(undefined8 **)(lVar16 + 0x38);
      }
      uVar13 = *puVar14;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
      plVar15 = (long *)UnityEngine_GameObject__AddComponent_43c0d20(lVar12,uVar13,0);
      lVar12 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0216b470(lVar12);
      }
      if (plVar15 != (long *)0x0) {
        lVar16 = *plVar15;
        uVar11 = FUN_0219428c(lVar12,lVar16);
        if ((uVar11 & 1) == 0) {
          if ((*(ushort *)(lVar16 + 0x135) >> 0xc & 1) == 0) {
            plVar15 = (long *)0x0;
          }
          else {
            if (((((*(byte *)(lVar12 + 0x118) >> 5 & 1) != 0) ||
                 (*(char *)(lVar12 + 0x2a) == '\x1e')) || (*(char *)(lVar12 + 0x2a) == '\x13')) &&
               ((*(long *)(lVar12 + 0x70) != 0 &&
                (lVar16 = *(long *)(*(long *)(lVar12 + 0x70) + 0x28), lVar16 != 0)))) {
              lVar10 = FUN_0217e1c0(plVar15,lVar16);
              if (lVar10 != 0) {
                return plVar15;
              }
              iVar9 = (*(code *)**(undefined8 **)plVar15[2])
                                ((undefined8 *)plVar15[2],lVar16,&stack0xffffffffffffffd8);
              if (-1 < iVar9) {
                uVar11 = FUN_0217e250(plVar15,lVar16,0);
                lVar10 = 0;
                if ((uVar11 & 1) == 0) {
                  (**(code **)(lRam0000000000000000 + 0x10))();
                  lVar10 = FUN_0217e1c0(plVar15,lVar16);
                }
                if (lVar10 != 0) {
                  return plVar15;
                }
              }
            }
            if (lRam0000000004faee08 != lVar12) {
              plVar15 = (long *)0x0;
            }
          }
        }
      }
      return plVar15;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar3;
  }
  return (long *)**(undefined8 **)(lVar12 + 0xb8);
}

