/* IL2CPP: Dino.BusSand.View.SuctionBeams$$Feed
void Dino_BusSand_View_SuctionBeams__Feed (Dino_BusSand_View_SuctionBeams_o* __this, int32_t id, UnityEngine_Vector3_o mouth, UnityEngine_Transform_o* bus, UnityEngine_Vector3_o localTarget, float mouthWidth, float busWidth, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SuctionBeams$$Feed
   void Dino_BusSand_View_SuctionBeams__Feed (Dino_BusSand_View_SuctionBeams_o* __this, int32_t id,
   UnityEngine_Vector3_o mouth, UnityEngine_Transform_o* bus, UnityEngine_Vector3_o localTarget,
   float mouthWidth, float busWidth, UnityEngine_Color_o color, const MethodInfo* method); */

void Dino_BusSand_View_SuctionBeams__Feed_23ecc10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,undefined4 param_10,undefined8 param_11)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long lStack_28;
  
  if ((bRam0000000004f9caa4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdc70);
    FUN_02132f7c(PTR_DAT_04cbdc78);
    FUN_02132f7c(PTR_DAT_04cbdc80);
    bRam0000000004f9caa4 = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_9 + 0x20) == 0) goto LAB_024ecd80;
  uVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                    (*(long *)(param_9 + 0x20),param_10,&lStack_28,*(undefined8 *)PTR_DAT_04cbdc78);
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_9 + 0x20);
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbdc70);
    System_Object___ctor_4870e5c(lVar2,0);
    if (lVar2 == 0) goto LAB_024ecd80;
    *(undefined4 *)(lVar2 + 0x4c) = 0;
    lStack_28 = lVar2;
    if (lVar3 == 0) goto LAB_024ecd80;
    System_Collections_Generic_Dictionary_int__object___set_Item_3437318
              (lVar3,param_10,lVar2,*(undefined8 *)PTR_DAT_04cbdc80);
  }
  if (lStack_28 != 0) {
    *(undefined8 *)(lStack_28 + 0x20) = param_11;
    *(undefined4 *)(lStack_28 + 0x10) = param_1;
    *(undefined4 *)(lStack_28 + 0x14) = param_2;
    *(undefined4 *)(lStack_28 + 0x18) = param_3;
    thunk_FUN_02134474((undefined8 *)(lStack_28 + 0x20),param_11);
    lVar2 = lStack_28;
    if (lStack_28 != 0) {
      *(undefined4 *)(lStack_28 + 0x28) = param_4;
      *(undefined4 *)(lStack_28 + 0x2c) = param_5;
      *(undefined4 *)(lStack_28 + 0x3c) = uStack0000000000000000;
      *(undefined4 *)(lStack_28 + 0x30) = param_6;
      *(undefined4 *)(lStack_28 + 0x34) = param_7;
      *(undefined4 *)(lStack_28 + 0x38) = param_8;
      *(undefined4 *)(lStack_28 + 0x40) = uStack0000000000000004;
      *(undefined4 *)(lStack_28 + 0x44) = uStack0000000000000008;
      *(undefined4 *)(lStack_28 + 0x48) = uStack000000000000000c;
      uVar4 = UnityEngine_Time__get_time_43cd540(0);
      *(undefined4 *)(lVar2 + 0x50) = uVar4;
      return;
    }
  }
LAB_024ecd80:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

