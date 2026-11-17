/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnLaneAdvanced
void Dino_BusSand_View_MechanicLayer__OnLaneAdvanced (Dino_BusSand_View_MechanicLayer_o* __this, int32_t laneId, int32_t truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnLaneAdvanced
   void Dino_BusSand_View_MechanicLayer__OnLaneAdvanced (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t laneId, int32_t truckId, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnLaneAdvanced_23cc9e8
               (long param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c9f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd478);
    FUN_02132f7c(PTR_DAT_04cbc470);
    FUN_02132f7c(PTR_DAT_04cbc480);
    FUN_02132f7c(PTR_DAT_04cbc488);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbc4a0);
    FUN_02132f7c(PTR_DAT_04cbc138);
    FUN_02132f7c(PTR_DAT_04cbd480);
    FUN_02132f7c(PTR_DAT_04cbd1b8);
    FUN_02132f7c(PTR_DAT_04cbd1c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9f1 = 1;
  }
  lStack_40 = 0;
  lStack_38 = 0;
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Mechanic_2384944(0,0,**(long **)(lVar2 + 0xb8),5,0);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0x88),param_2,&lStack_38,*(undefined8 *)PTR_DAT_04cbd478)
    ;
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x40), lVar2 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_68,lVar2,*(undefined8 *)PTR_DAT_04cbc4a0);
      puVar1 = PTR_DAT_04cbc480;
      puStack_48 = puStack_60;
      uStack_50 = uStack_68;
      lStack_40 = lStack_58;
      uStack_68 = 0;
      lVar2 = 0;
      puStack_60 = &uStack_50;
      while (lVar7 = lVar2,
            uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_50,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar2 = lStack_40;
        if (*(int *)(lStack_40 + 0x10) != param_2) {
          lVar2 = lVar7;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_50,*(undefined8 *)PTR_DAT_04cbc470);
      if ((lStack_38 != 0) && (lVar2 = *(long *)(lStack_38 + 0x18), lVar2 != 0)) {
        if (*(int *)(lVar2 + 0x18) < 1) {
LAB_024ccd18:
          if (lVar7 != 0) {
            Dino_BusSand_View_MechanicLayer__PlaceLaneGhosts_23c43a4
                      (_UNK_00e207cc,param_1,lVar7,lStack_38,1);
          }
          Dino_BusSand_View_MechanicLayer__AnimateBoom_23cf3c0(param_1,lStack_38);
          return;
        }
        lVar2 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar2,0,*(undefined8 *)PTR_DAT_04cbd1c0);
        if ((((lStack_38 != 0) && (*(long *)(lStack_38 + 0x18) != 0)) &&
            (System_Collections_Generic_List_object___RemoveAt_3a833a0
                       (*(long *)(lStack_38 + 0x18),0,*(undefined8 *)PTR_DAT_04cbd480),
            lStack_38 != 0)) && (*(long *)(lStack_38 + 0x20) != 0)) {
          System_Collections_Generic_List_float___RemoveAt_3ac4020
                    (*(long *)(lStack_38 + 0x20),0,*(undefined8 *)PTR_DAT_04cbc138);
          lVar6 = *(long *)(param_1 + 0x30);
          if (lVar6 != 0) {
            lVar6 = (**(code **)(lVar6 + 0x18))
                              (*(undefined8 *)(lVar6 + 0x40),param_3,*(undefined8 *)(lVar6 + 0x28));
            puVar1 = PTR_DAT_04ca9ae8;
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
            }
            uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
            if ((uVar3 & 1) == 0) goto LAB_024ccd18;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
            if ((uVar3 & 1) == 0) {
              if (lVar2 == 0) goto LAB_024ccd60;
            }
            else {
              if (((lVar2 == 0) ||
                  (lVar4 = UnityEngine_Component__get_transform_43bcd18(lVar2,0), lVar4 == 0)) ||
                 (UnityEngine_Transform__get_position_43d0e48(lVar4,0), lVar6 == 0))
              goto LAB_024ccd60;
              Dino_BusSand_View_VehicleView__EmergeFrom_23fd6b4(lVar6,0,0);
            }
            uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0);
            lVar2 = *(long *)puVar1;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar2);
            }
            UnityEngine_Object__Destroy_43c8114(uVar5,0);
            goto LAB_024ccd18;
          }
        }
      }
    }
  }
LAB_024ccd60:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

