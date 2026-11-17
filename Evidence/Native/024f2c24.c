/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchPileLocal
UnityEngine_Matrix4x4_o Dino_BusSand_View_VehicleView__get_BatchPileLocal (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchPileLocal
   UnityEngine_Matrix4x4_o Dino_BusSand_View_VehicleView__get_BatchPileLocal
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__get_BatchPileLocal_23f2c24(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cb04 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbde60);
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cb04 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  if ((*(long *)(param_2 + 0xc0) != 0) &&
     (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x68), lVar4 != 0)) {
    System_Collections_Generic_Dictionary_object__ValueTuple_Vector2__Vector2__float__float__float____get_Item_3485204
              (&uStack_a0,lVar4,*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x10),
               *(undefined8 *)PTR_DAT_04cbde60);
    uVar3 = uStack_94;
    uVar2 = uStack_98;
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(PTR_DAT_04cab4b0);
      cRam0000000004f9b88b = '\x01';
    }
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
    UnityEngine_Matrix4x4__TRS_43ac144
              (&uStack_a0,0,uVar2,uVar3,*puVar5,puVar5[1],puVar5[2],puVar5[3],0);
    param_1[1] = CONCAT44(uStack_94,uStack_98);
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = CONCAT44(uStack_8c,uStack_90);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

