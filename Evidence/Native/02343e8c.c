/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$BindHall
void Dino_BusSand_App_Meta_NoAdsFeature__BindHall (Dino_BusSand_App_Meta_NoAdsFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$BindHall
   void Dino_BusSand_App_Meta_NoAdsFeature__BindHall (Dino_BusSand_App_Meta_NoAdsFeature_o* __this,
   Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method); */

void Dino_BusSand_App_Meta_NoAdsFeature__BindHall_2243e8c
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  
  puVar2 = PTR_DAT_04cb0110;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb18 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,0);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0118);
    FUN_02132f7c(PTR_DAT_04cb0120);
    FUN_02132f7c(PTR_DAT_04cb0110);
    FUN_02132f7c(PTR_DAT_04cb0128);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb0130);
    bRam0000000004f9bb18 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar6,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if ((param_5 != 0) &&
     (uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_5,*(undefined8 *)PTR_DAT_04cb0130,0),
     lVar6 != 0)) {
    puVar13 = (undefined8 *)(lVar6 + 0x10);
    *puVar13 = uVar8;
    thunk_FUN_02134474(puVar13,uVar8);
    uVar8 = *puVar13;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = Dino_BusSand_App_UI_GiftPackUi__Ticker_21acea4
                      (param_5,*(undefined8 *)PTR_DAT_04cb0128,0);
    puVar1 = PTR_DAT_04caa458;
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x28) = 0x3f800000;
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action___ctor_47b5ed0(uVar8,lVar6,*(undefined8 *)PTR_DAT_04cb0118,0);
      *(undefined8 *)(lVar9 + 0x20) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20),uVar8);
      if (*(long *)(lVar6 + 0x10) != 0) {
        uVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar6 + 0x10),0);
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        System_Action___ctor_47b5ed0(uVar10,lVar6,*(undefined8 *)PTR_DAT_04cb0120,0);
        Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar10,1,*(undefined8 *)PTR_DAT_04cad948,0);
        puVar1 = PTR_DAT_04ca9ae8;
        lVar6 = *(long *)(lVar6 + 0x10);
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
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
        if ((uVar7 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_04cb00a0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar9 = Dino_BusSand_App_Meta_NoAdsFeature__get_I_2243704(0);
          if (lVar9 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry_2243a30(lVar9,0);
          }
          if ((lVar6 == 0) ||
             (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar9 == 0)) {
LAB_022cb96c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
          if ((uVar3 & 1) != (uVar4 & 1)) {
            lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
            if (lVar9 == 0) goto LAB_022cb96c;
            UnityEngine_GameObject__SetActive_43c1408(lVar9,uVar3 & 1,0);
          }
          if ((uVar3 & 1) != 0) {
            fVar14 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar6,0);
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            puVar1 = PTR_DAT_04caa208;
            pfVar11 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            if ((param_3 - pfVar11[2]) * (param_3 - pfVar11[2]) +
                (fVar14 - *pfVar11) * (fVar14 - *pfVar11) +
                (param_2 - pfVar11[1]) * (param_2 - pfVar11[1]) < _UNK_00e1fea0) {
              if (cRam0000000004f9b65e == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65e = '\x01';
                pfVar11 = *(float **)(*(long *)puVar1 + 0xb8);
              }
              UnityEngine_Transform__set_localScale_43d1be0
                        (pfVar11[3],pfVar11[4],pfVar11[5],lVar6,0);
            }
            lVar6 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04caef10,0);
            lVar12 = *(long *)PTR_DAT_04ca9d18;
            lVar9 = *(long *)(lVar12 + 0x38);
            if (lVar9 == 0) {
              FUN_0216b4cc(lVar12);
              lVar9 = *(long *)(lVar12 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0216b470();
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0216b470();
            }
            uVar8 = **(undefined8 **)(lVar9 + 0xb8);
            if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
            }
            uVar8 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb0138,uVar8,0);
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
            }
            puVar1 = PTR_DAT_04ca9ae8;
            if ((bRam0000000004f9ba6b & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cada48,uVar8,0);
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              bRam0000000004f9ba6b = 1;
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
            if ((uVar7 & 1) == 0) {
              if ((lVar6 == 0) ||
                 (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                                    (lVar6,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar3 = *(uint *)(lVar6 + 0x18);
              if (0 < (int)uVar3) {
                lVar9 = 0;
                do {
                  if (uVar3 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  plVar5 = *(long **)(lVar6 + 0x20 + lVar9 * 8);
                  if (plVar5 == (long *)0x0) goto LAB_022a95f0;
                  (**(code **)(*plVar5 + 0x518))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x520));
                  uVar3 = *(uint *)(lVar6 + 0x18);
                  lVar9 = lVar9 + 1;
                } while ((int)lVar9 < (int)uVar3);
              }
            }
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

