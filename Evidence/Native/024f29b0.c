/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchOpen
bool Dino_BusSand_View_VehicleView__get_BatchOpen (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchOpen
   bool Dino_BusSand_View_VehicleView__get_BatchOpen (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

uint Dino_BusSand_View_VehicleView__get_BatchOpen_23f29b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x2c) != 4) {
    return 0;
  }
  if ((bRam0000000004f9cad6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdfc8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cad6 = 1;
  }
  puVar2 = PTR_DAT_04cbc2c8;
  if (*(char *)(param_1 + 0xe0) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cbc2c8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9cb0a == '\0') {
      FUN_02132f7c(PTR_DAT_04cbc2c8);
      cRam0000000004f9cb0a = '\x01';
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9cb0a == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc2c8);
        cRam0000000004f9cb0a = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
        uVar5 = Dino_BusSand_View_VehicleBatch__HasCargo_23f1e10
                          (lVar4,*(undefined4 *)(param_1 + 0x24));
        puVar2 = PTR_DAT_04cbc460;
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        lVar4 = *(long *)PTR_DAT_04cbc460;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        if ((*(long *)(param_1 + 0xc0) != 0) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x68), lVar4 != 0)) {
          uVar3 = System_Collections_Generic_Dictionary_object__ValueTuple_Vector2__Vector2__float__float__float____FindEntry_3485a8c
                            (lVar4,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10),
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)PTR_DAT_04cbdfc8 + 0x20) + 0xc0) + 0x110
                              ));
          return ~uVar3 >> 0x1f;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

