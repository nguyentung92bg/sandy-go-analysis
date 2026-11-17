/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnTruckLeft
void Dino_BusSand_View_MechanicLayer__OnTruckLeft (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnTruckLeft
   void Dino_BusSand_View_MechanicLayer__OnTruckLeft (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnTruckLeft_23cdf88(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9c9fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd3d8);
    FUN_02132f7c(PTR_DAT_04cbd3a8);
    FUN_02132f7c(PTR_DAT_04cab9d8);
    FUN_02132f7c(PTR_DAT_04cbd510);
    FUN_02132f7c(PTR_DAT_04cbd518);
    FUN_02132f7c(PTR_DAT_04cbd520);
    FUN_02132f7c(PTR_DAT_04cbd528);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9fa = 1;
  }
  lStack_40 = 0;
  uStack_38 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x50), lVar3 == 0)) goto LAB_024ce2a8;
  uVar4 = System_Collections_Generic_Dictionary_int__TruckPayload___TryGetValue_3446abc
                    (lVar3,param_2,&uStack_38,*(undefined8 *)PTR_DAT_04cab9d8);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_024ce2a8;
    System_Collections_Generic_List_ValueTuple_byte__object____GetEnumerator_399fd74
              (&uStack_80,*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_04cbd528);
    uStack_60 = uStack_80;
    puVar2 = PTR_DAT_04cbd518;
    uVar1 = _UNK_00e20094;
    uStack_80 = 0;
    puStack_58 = puStack_78;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    puStack_78 = &uStack_60;
    while (uVar4 = System_Collections_Generic_List_Enumerator_ValueTuple_byte__object____MoveNext_35ba9b0
                             (&uStack_60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if ((char)uStack_38 == (char)uStack_50) {
        Dino_BusSand_View_MechanicLayer__Flash_23cf8d4
                  (0x3f800000,0x3f800000,0x3f800000,uVar1,param_1,uStack_48);
      }
    }
    System_Collections_Generic_List_Enumerator_ValueTuple_byte__object____Dispose_35ba9ac
              (&uStack_60,*(undefined8 *)PTR_DAT_04cbd510);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    Dino_BusSand_View_ChainRig__OnEscaped_2391a0c(*(long *)(param_1 + 0x68),param_2,0);
  }
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_024ce2a8;
  uVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                    (*(long *)(param_1 + 0x60),param_2,&lStack_40,*(undefined8 *)PTR_DAT_04cbd3a8);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) goto LAB_024ce2a8;
  lVar3 = (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),param_2,*(undefined8 *)(lVar3 + 0x28));
  if (lVar3 != 0) {
    Dino_BusSand_View_VehicleView__SetOutline_23fc898(lVar3,0,0);
  }
  Dino_BusSand_View_MechanicLayer__RetractHose_23ca284(param_1,lStack_40);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lStack_40 == 0) goto LAB_024ce2a8;
  uVar5 = *(undefined8 *)(lStack_40 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar4 & 1) == 0) {
LAB_024ce1b4:
    if (lStack_40 == 0) goto LAB_024ce2a8;
  }
  else {
    if (lStack_40 == 0) goto LAB_024ce2a8;
    if (*(char *)(lStack_40 + 0xa8) == '\0') {
      Dino_BusSand_View_MechanicLayer__ShrinkAway_23ca4b8(param_1,*(undefined8 *)(lStack_40 + 0x10))
      ;
      Dino_BusSand_View_MechanicLayer__FreeStation_23ca618(param_1,lStack_40);
      goto LAB_024ce1b4;
    }
  }
  uVar5 = *(undefined8 *)(lStack_40 + 0x40);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (((lStack_40 == 0) || (*(long *)(lStack_40 + 0x40) == 0)) ||
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lStack_40 + 0x40),0),
       lVar3 == 0)) goto LAB_024ce2a8;
    UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
  }
  if (lStack_40 != 0) {
    *(undefined8 *)(lStack_40 + 0x10) = 0;
    thunk_FUN_02134474((undefined8 *)(lStack_40 + 0x10),0);
    if (lStack_40 != 0) {
      *(undefined8 *)(lStack_40 + 0x50) = 0;
      thunk_FUN_02134474((undefined8 *)(lStack_40 + 0x50),0);
      if (lStack_40 != 0) {
        *(undefined8 *)(lStack_40 + 0x40) = 0;
        thunk_FUN_02134474((undefined8 *)(lStack_40 + 0x40),0);
        if (lStack_40 != 0) {
          uVar5 = *(undefined8 *)(lStack_40 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_024ce2a8;
            System_Collections_Generic_Dictionary_int__object___Remove_34387d4
                      (*(long *)(param_1 + 0x60),param_2,*(undefined8 *)PTR_DAT_04cbd3d8);
          }
          return;
        }
      }
    }
  }
LAB_024ce2a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

