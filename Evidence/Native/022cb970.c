/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi.<>c__DisplayClass1_0$$<BindHall>b__0
void Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0___BindHall_b__0 (Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi.<>c__DisplayClass1_0$$<BindHall>b__0
   void Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0___BindHall_b__0
   (Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0___BindHall_b__0_21cb970
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022cb970 to 023cb97b has its CatchHandler @ 022cb7fc */
  lVar7 = *(long *)(param_4 + 0x10);
  if ((bRam0000000004f9bb19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb00a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0138);
    FUN_02132f7c(PTR_DAT_04caef10);
    bRam0000000004f9bb19 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cb00a0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_NoAdsFeature__get_I_2243704(0);
    if (lVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry_2243a30(lVar6,0);
    }
    if ((lVar7 == 0) || (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar6 == 0)
       ) {
LAB_022cb96c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
    if ((uVar2 & 1) != (uVar3 & 1)) {
      lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
      if (lVar6 == 0) goto LAB_022cb96c;
      UnityEngine_GameObject__SetActive_43c1408(lVar6,uVar2 & 1,0);
    }
    if ((uVar2 & 1) != 0) {
      fVar11 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar7,0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar1 = PTR_DAT_04caa208;
      pfVar8 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      if ((param_3 - pfVar8[2]) * (param_3 - pfVar8[2]) +
          (fVar11 - *pfVar8) * (fVar11 - *pfVar8) + (param_2 - pfVar8[1]) * (param_2 - pfVar8[1]) <
          _UNK_00e1fea0) {
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
          pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
        }
        UnityEngine_Transform__set_localScale_43d1be0(pfVar8[3],pfVar8[4],pfVar8[5],lVar7,0);
      }
      lVar7 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04caef10,0);
      lVar9 = *(long *)PTR_DAT_04ca9d18;
      lVar6 = *(long *)(lVar9 + 0x38);
      if (lVar6 == 0) {
        FUN_0216b4cc(lVar9);
        lVar6 = *(long *)(lVar9 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0216b470();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0216b470();
      }
      uVar10 = **(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      }
      uVar10 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb0138,uVar10,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9ba6b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cada48,uVar10,0);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9ba6b = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
      if ((uVar5 & 1) == 0) {
        if ((lVar7 == 0) ||
           (lVar7 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                              (lVar7,1,*(undefined8 *)PTR_DAT_04cada48), lVar7 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar2) {
          lVar6 = 0;
          do {
            if (uVar2 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar4 = *(long **)(lVar7 + 0x20 + lVar6 * 8);
            if (plVar4 == (long *)0x0) goto LAB_022a95f0;
            (**(code **)(*plVar4 + 0x518))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x520));
            uVar2 = *(uint *)(lVar7 + 0x18);
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)uVar2);
        }
      }
      return;
    }
  }
  return;
}

