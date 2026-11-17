/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$ResetItemTutorial
void Dino_BusSand_App_UI_LevelEnterFlow__ResetItemTutorial (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$ResetItemTutorial
   void Dino_BusSand_App_UI_LevelEnterFlow__ResetItemTutorial (int32_t item, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_LevelEnterFlow__ResetItemTutorial_233d1fc(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  float fVar13;
  
  puVar2 = PTR_DAT_04cb94b0;
  if ((bRam0000000004f9c666 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04cb94b8);
    FUN_02132f7c(PTR_DAT_04cad868);
    FUN_02132f7c(PTR_DAT_04cb94c0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb94c8);
    FUN_02132f7c(PTR_DAT_04cb94b0);
    FUN_02132f7c(PTR_DAT_04cb1980);
    FUN_02132f7c(PTR_DAT_04cb1d18);
    bRam0000000004f9c666 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar6,0);
  puVar5 = PTR_DAT_04cb1d18;
  puVar4 = PTR_DAT_04cb1980;
  puVar3 = PTR_DAT_04cacb20;
  puVar2 = PTR_DAT_04cabaf8;
  if (lVar6 != 0) {
    piVar11 = (int *)(lVar6 + 0x10);
    *piVar11 = param_1;
    uVar7 = System_Int32__ToString_482d750(piVar11,0);
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar5,uVar7,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar7,0,0);
    uVar7 = System_Int32__ToString_482d750(piVar11,0);
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar7,0);
    Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar7,0,0);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar3;
    }
    puVar3 = PTR_DAT_04cad868;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (lVar8 != 0) {
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar12 = 0;
        uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          uVar1 = *(undefined4 *)(lVar8 + 0x20 + uVar12 * 4);
          lVar9 = Dino_BusSand_App_UI_GuideRequest__FromConfig_22ce980(uVar1,0);
          if (lVar9 == 0) goto LAB_0243d4f8;
          if (*(int *)(lVar9 + 0x44) == *piVar11) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b894 == '\0') {
              FUN_02132f7c(puVar2);
              cRam0000000004f9b894 = '\x01';
            }
            lVar9 = *(long *)puVar2;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar2;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x48), lVar9 == 0)) goto LAB_0243d4f8;
            System_Collections_Generic_List_int___Remove_3a2d540(lVar9,uVar1,*(undefined8 *)puVar3);
          }
          uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      puVar4 = PTR_DAT_04cb94c8;
      puVar3 = PTR_DAT_04cb94b8;
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + 0x1d0);
        if (lVar9 != 0) {
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb94c0);
          System_Predicate_object____ctor_2c4e748(uVar7,lVar6,*(undefined8 *)puVar4,0);
          System_Collections_Generic_List_object___RemoveAll_3a83234
                    (lVar9,uVar7,*(undefined8 *)puVar3);
          lVar8 = *(long *)puVar2;
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar2 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9c0ee & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          bRam0000000004f9c0ee = 1;
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 0x28) = 1;
        fVar13 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = fVar13 + 0.5;
        return;
      }
    }
  }
LAB_0243d4f8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

