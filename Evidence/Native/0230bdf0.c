/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$AllowsLiveFeature
bool Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$AllowsLiveFeature
   bool Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature (System_String_o* key, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature_220bdf0(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000004f9bcf2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb2160);
    FUN_02132f7c(PTR_DAT_04cb2168);
    FUN_02132f7c(PTR_DAT_04cb2170);
    FUN_02132f7c(PTR_DAT_04cb2178);
    FUN_02132f7c(PTR_DAT_04cb2180);
    FUN_02132f7c(PTR_DAT_04cb2188);
    FUN_02132f7c(PTR_DAT_04cb2190);
    FUN_02132f7c(PTR_DAT_04cabd60);
    FUN_02132f7c(PTR_DAT_04cb0240);
    bRam0000000004f9bcf2 = 1;
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash_22a1900(param_1,0);
  if (uVar3 < 0x9f251aea) {
    if (0x604808e3 < uVar3) {
      if (uVar3 == 0x98eec5b9) {
                    /* catch() { ... } // from try @ 0230c094 with catch @ 0230c0d8 */
                    /* catch() { ... } // from try @ 0230c13c with catch @ 0230c0e0 */
        uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb2178,0);
        if ((uVar4 & 1) == 0) {
          return true;
        }
        if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = 7;
      }
      else {
        if (uVar3 != 0x9f251ae9) {
          return true;
        }
        uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb2180,0);
        if ((uVar4 & 1) == 0) {
          return true;
        }
        if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
                    /* try { // try from 0230bff4 to 0240bffb has its CatchHandler @ 0230c038 */
          thunk_FUN_0218fdac();
        }
        uVar3 = 10;
                    /* try { // try from 0230bffc to 0240c03f has its CatchHandler @ 0230bfa0 */
      }
      goto code_r0x0230b9e8;
    }
    if (uVar3 == 0xb352f64) {
      uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cabd60,0);
      if ((uVar4 & 1) != 0) {
        return false;
      }
      return true;
    }
    if (uVar3 != 0x604808e3) {
      return true;
    }
    uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb0240,0);
    if ((uVar4 & 1) == 0) {
      return true;
    }
    lVar5 = *(long *)PTR_DAT_04cac458;
  }
  else {
    if (0xc1f70c0a < uVar3) {
      if (uVar3 == 0xcb44bf3f) {
        uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb2170,0);
        if ((uVar4 & 1) == 0) {
          return true;
        }
        if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* catch() { ... } // from try @ 0230c134 with catch @ 0230c178 */
        uVar3 = 8;
      }
      else if (uVar3 == 0xd4f74cee) {
        uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb2168,0);
        if ((uVar4 & 1) == 0) {
          return true;
        }
                    /* try { // try from 0230c134 to 0240c13b has its CatchHandler @ 0230c178 */
        if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0230c13c to 0240c17f has its CatchHandler @ 0230c0e0 */
        uVar3 = 0xb;
      }
      else {
                    /* catch() { ... } // from try @ 0230bff4 with catch @ 0230c038 */
                    /* catch() { ... } // from try @ 0230c09c with catch @ 0230c040 */
        if ((uVar3 != 0xfa8885e2) ||
           (uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb2190,0),
           (uVar4 & 1) == 0)) {
          return true;
        }
        if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = 0xe;
      }
      goto code_r0x0230b9e8;
    }
    if (uVar3 == 0xa1236857) {
                    /* try { // try from 0230c094 to 0240c09b has its CatchHandler @ 0230c0d8 */
                    /* try { // try from 0230c09c to 0240c0df has its CatchHandler @ 0230c040 */
      uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb2188,0);
      if ((uVar4 & 1) == 0) {
        return true;
      }
      if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = 0xd;
      goto code_r0x0230b9e8;
    }
    if (uVar3 != 0xc1f70c0a) {
      return true;
    }
    uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb2160,0);
    puVar1 = PTR_DAT_04cac458;
    if ((uVar4 & 1) == 0) {
      return true;
    }
    if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(6);
    if ((uVar4 & 1) != 0) {
      return true;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(0xc);
    if ((uVar4 & 1) != 0) {
      return true;
    }
    lVar5 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 0230bffc with catch @ 0230bfa0 */
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = 9;
code_r0x0230b9e8:
  puVar1 = PTR_DAT_04cac458;
                    /* catch() { ... } // from try @ 0230c1c8 with catch @ 0230c180 */
  if ((bRam0000000004f9bcf3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb2140);
    bRam0000000004f9bcf3 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = System_Collections_Generic_HashSet_Int32Enum___Contains_37decd4
                    (lVar5,uVar3,*(undefined8 *)PTR_DAT_04cb2140);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    bVar2 = true;
    if ((5 < uVar3) && (uVar3 != 0xf)) {
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      bVar2 = **(char **)(lVar5 + 0xb8) != '\0';
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

