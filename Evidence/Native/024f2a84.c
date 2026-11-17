/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchLidLocal
UnityEngine_Matrix4x4_o Dino_BusSand_View_VehicleView__get_BatchLidLocal (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchLidLocal
   UnityEngine_Matrix4x4_o Dino_BusSand_View_VehicleView__get_BatchLidLocal
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__get_BatchLidLocal_23f2a84(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cb03 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbde60);
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cb03 = 1;
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
    uVar3 = uStack_9c;
    uVar2 = uStack_a0;
    uVar8 = *(undefined4 *)(param_2 + 0x140);
    if (cRam0000000004f9c25f == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9c25f = '\x01';
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    uVar5 = *(undefined4 *)(lVar4 + 0x3c);
    uVar6 = *(undefined4 *)(lVar4 + 0x40);
    uVar7 = *(undefined4 *)(lVar4 + 0x44);
    uVar8 = UnityEngine_Quaternion__AngleAxis_43af1e8(uVar8,uVar5,uVar6,uVar7,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    UnityEngine_Matrix4x4__TRS_43ac144(&uStack_a0,0,uVar2,uVar3,uVar8,uVar5,uVar6,uVar7,0);
    param_1[1] = uStack_98;
    *param_1 = CONCAT44(uStack_9c,uStack_a0);
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

